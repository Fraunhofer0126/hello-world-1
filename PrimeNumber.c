#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("请输入两个整数，本程序将判断是否为质数：\n");
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
	if(c==1)
		printf("互质");
	else
		printf("不互质"); 
	return 0;
 } 
