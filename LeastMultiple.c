#include<stdio.h>
int main(void)
{
	int a,b,c,min;
	printf("请输入两个整数，本程序将算出最小公倍数：\n");
	scanf("%d %d",&a,&b);
	if(a>b)
		c=b;
	else
		c=a;
	while(c>0){
        if(a%c==0 && b%c==0)
            break;
        else
           c=c-1;
	}
	min=a*b/c; 
	printf("最小公倍数为%d",min);
	return 0;
 } 
