#include <stdio.h>

int main(void) {
	
	int n,n1,arr1[20],arr2[20],i,j,count=0;
	scanf("%d",&n);
	scanf("%d",&n1);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(j=0;j<n1;j++)
	{
		scanf("%d",&arr2[j]);
	}
	for(j=0;j<n1;j++)
	{
		for(i=0;i<n;i++)
		{
			if(arr1[i]==arr2[j])
			{
				count++;
			}
		}
	
	}
		if(count==n1)
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}

	return 0;
}
