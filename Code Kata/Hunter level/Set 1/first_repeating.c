#include <stdio.h>

int main(void) {
	
	int n,arr[20],i,j,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("%d\t",arr[i]);
				flag=1;
			}
		}
	if(flag==1)
	{
		break;
	}
	}

	return 0;
}
