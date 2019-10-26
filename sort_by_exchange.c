//交换排序
#include <stdio.h>
int main() 
{
	int x[3] = {5, 2, 1}, i;
	while(1) 
	{
	    scanf("%d %d %d", &x[0], &x[1], &x[2]);
	    for(i=0;i<2;i++) {
	    	if((x[2]<x[0])&& (x[2]<x[1]))        //加上第一和第三元素调换，以便如果第三个数最小可以回到首位 
	    	{
	    		int tempp = x[0];
				x[0] = x[2];
				x[2] = tempp;
			}
			
		    if( x[i] > x[i+1]) {
		  	    int temp = x[i];
		  	    x[i] = x[i+1];
		  	    x[i+1] = temp;
		    }
			
		}
		printf("%d,%d,%d\n", x[0], x[1], x[2]);
	}
  	return 0;
}
