//һ���������� 72 �ˣ����л�Ӣ����� 48 �ˣ��������� 36 �ˣ�������������� 8 �ˣ������������
//_______����
//��̣�������������72��
//     �����Ӣ��48��
//     ��������36��
//     ����������������8��
//     ��������������   �� 
//     ������������ݴ����޷�����
#include<stdio.h>
int main(void)
{
	int a,e,r,n,c;
	printf("Enter the total number: ");
	scanf("%d",&a);
	printf("Enter the English number: ");
	scanf("%d",&e);
	printf("Enter the Russia number: ");
	scanf("%d",&r);
	printf("Enter the unability number: ");
	scanf("%d",&n);
	c=(n + e + r -a);
	if(c>e || c>r)
		printf("Input Error");
	else
		printf("There are %d people can do the both",c);
	
	
} 
