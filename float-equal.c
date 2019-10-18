//实现代码判断2个float变量相等
//误差精确到时小数点后5位
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
