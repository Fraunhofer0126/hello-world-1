//f(n)�����Ķ���Ϊ0~n�а�����1�ĸ���
//f(13)��0~13�а���1���� 1��10��11��12��13������f(13)=6
//f(1) = 1��
//����һ��f(n)=n��nֵ
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
