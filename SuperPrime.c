//������������������λ���ֵĺͣ���λ���ֵ�ƽ���ͣ�����������
//�� 100~10000 �ڵ����г��������������ǵ�ƽ������
#include<stdio.h>
#include<stdbool.h>
bool prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			break;
	}
	if(i<n-1)
		return false;
	else
		return true;
}
int main(void)
{
	int time=0;
	int sum=0;
	int n,i,p,q,t,site;
	int a[6]={0};
	bool ju1=false,ju2=false,ju3=false;
	for(n=100;n<=10000;n++)
	{
		ju1=false,ju2=false,ju3=false;
		t=10;p=n;
		for(i=0;p!=0;i++)
			p=p/10;
		q=i;site=i;p=n;
		for(i=0;i<site;i++)
		{
			a[i]=p%t/(t/10);
			p=p-a[i];
			t=t*10;
		}					//��nÿһλ������� 
		
		if(prime(n))
			ju1=true;
		int sum1=0,sum2=0;
		for(i=0;i<site;i++)
			sum1+=a[i];
		if(prime(sum1))
			ju2=true;
		for(i=0;i<site;i++)
			sum2+=a[i]*a[i];
		if(prime(sum2))
			ju3=true;
							//�ж������� 
		if(ju1&&ju2&&ju3){
			printf("%d\n",n);
			time++;
			sum+=n;
		}
		
		for(i=0;i<site;i++)	//free a[i]
			a[i]=0; 
	}
	printf("Average is :%d",sum/time);
	return 0;
} 
