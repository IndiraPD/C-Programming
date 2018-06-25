#include <stdio.h>

int main(void) {
	
	int n,arr[20],i,j,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=arr[i]+arr[j];
			if(sum==arr[j+1])
			{
				printf("%d %d %d\n",arr[i],arr[j],arr[j+1]);
			}
		}
	}

	return 0;
}
