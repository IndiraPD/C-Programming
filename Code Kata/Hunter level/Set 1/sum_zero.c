#include <stdio.h>

int main(void) {
	
	int n,arr[20],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==0)
			{
				printf("%d\t%d",arr[i],arr[j]);
				
			}
			
		}

		
	}

	return 0;
}
