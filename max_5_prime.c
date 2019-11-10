//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//素数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位素数输出。如果不存在5位素数，则输出ERROR。
#include<stdio.h>
#include<stdbool.h>
void swap2(int *a,int *b)
{
	int t;
	t=*b;
	*b=*a;
	*a=t;
}
void swap3(int *a,int *b,int *c)//把abc变成bca 
{
	int t;
	t=*a;
	*a=*c;
	*c=*b; 
	*b=t;
}
void swap4(int *a,int *b,int *c,int *d)//把abcd变成bcda 
{
	int t;
	t=*a;
	*a=*d;
	*d=*c;
	*c=*b;
	*b=t;
}
void swap5(int *a,int *b,int *c,int *d,int *e)//把abcde变成bcdea 
{
	int t;
	t=*a;
	*a=*e;
	*e=*d;
	*d=*c;
	*c=*b;
	*b=t;
}
int main(void)
{
	int i,n,j,k,m,l,t,result=0,time=0,timer=0;
	int num[5],numbb[120],prime[120]={0};
	printf("Enter 5 number: ");
	for(t=0;t<5;t++)
	{
		scanf("%d",&num[t]);
	}
	bool judge=false,ju=true;
	for(i=0;i<5;i++)
 	{
  		for(j=0;j<5-1;j++)
  		{
   			if(num[j+1]<num[j])
   			{
    			k=num[j+1]; num[j+1]=num[j]; num[j]=k;
   			}
  		}
 	}
	for(l=0;l<5;l++)
	{
		swap5(&num[0],&num[1],&num[2],&num[3],&num[4]);
		for(i=0;i<4;i++)
		{
			swap4(&num[1],&num[2],&num[3],&num[4]);
			for(j=0;j<3;j++)
			{	
				swap3(&num[2],&num[3],&num[4]);
				for(m=0;m<2;m++)
				{
					swap2(&num[3],&num[4]);
					n=10000*num[0]+1000*num[1]+100*num[2]+10*num[3]+num[4];
					numbb[time]=n;
					time++;
					printf("%d\n",n);
					judge=false;
					for(t=2;t<n/2+1;t++)
					{
						if(n%t==0)
						judge=true;
					}
					if(judge)
						printf("Not prime number\n");
					else{
						printf("It is prime number\n");
						prime[timer]=n;
						timer++;
					}			
				}
			}
		}
	
	}
	for(i=0;i<timer;i++)
 	{
  		for(j=0;j<timer-1;j++)
  		{
   			if(prime[j+1]>prime[j])
   			{
    			swap2(&prime[j+1],&prime[j]);
   			}
  		}
 	}
	if(prime[0]==0)
		printf("ERROR");
	else 
		printf("The max prime number: %d",prime[0]);
	return 0;
} 
