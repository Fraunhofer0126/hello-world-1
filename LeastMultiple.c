#include<stdio.h>
int main(void)
{
	int a,b,c,min;
	printf("���������������������������С��������\n");
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
	printf("��С������Ϊ%d",min);
	return 0;
 } 
