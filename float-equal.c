//ʵ�ִ����ж�2��float�������
//��ȷ��ʱС�����5λ
#include <stdio.h>
#include <math.h>
int main()
{
    float m,n;
    printf("Enter two float numbers(m n):");
    scanf("%f %f",&m,&n);

    float differ;
    differ = fabs(m-n);
    
    if (differ <= 0.00001) 
	{
        printf("equal\n");
    }
    else
    	printf("unequal\n");
    printf("M is %.5f\n", m);
    printf("N is %.5f\n", n);
    return 0;
} 
