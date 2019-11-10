//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	int n,p,q,count=0,i,j,k;
	bool ju=true;
	for(n=2;ju;n++)
	{
		p=n;
		for(q=0;p!=0;q++)
		{
			p=p/10;
		}
		p=n;
		for(i=0;i<q;i++)
		{
			j=p%10;
			if(j==1)
				count++;
			p=p/10;
		}
		if(n==count+1)
			ju=false;
	}
	printf("%d",count+1);
	return 0;
} 
