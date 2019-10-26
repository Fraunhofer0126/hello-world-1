//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位数输出。
#include<stdio.h>
int main(void)
{
    int a[5];
    int i,j,k;
    for(i=0;i<=4;i++)
 	{
  		scanf("%d",&a[i]);
 	}
 	for(i=0;i<=4;i++)
 	{
  		for(j=0;j<=4;j++)
  		{
   			if(a[i]>a[j])
   			{
    			k=a[i]; a[i]=a[j]; a[j]=k;
   			}
  		}
 	}
 	printf("The Max is :");
 	for(i=0;i<=4;i++)
 	{
  		printf("%d",a[i]);
 	}
    return 0;
}
