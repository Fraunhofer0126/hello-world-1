#include <stdio.h>
int main() 
{
	while(1){ 
		int a[3];
	    int i,j,k;
	    for(i=0;i<=2;i++)
	 	{
	  		scanf("%d",&a[i]);
	 	}
	 	for(i=0;i<=2;i++)
	 	{
	  		for(j=0;j<=2;j++)
	  		{
	   			if(a[i]<a[j])
	   			{
	    			k=a[i]; a[i]=a[j]; a[j]=k;
	   			}
	  		}
	 	}
		for(i=0;i<3;i++)
	 	{
	  		printf("%d ",a[i]);
	 	}
	 	printf("\n");
	} 
  	return 0;
}
