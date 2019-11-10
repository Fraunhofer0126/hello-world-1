//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
#include<stdio.h>
int main(void)
{
	int f,n,t,g,re=0,i;
	printf("Enter the value of \"n\": " );
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i<10)
			g=i;
		else{
			t=i/10;
			g=i-t*10;
		}
		if(g==1){
			re+=1;
		}
		if(t==1){
			re+=1;
		}
	}
	printf("result: %d",re);
 } 
