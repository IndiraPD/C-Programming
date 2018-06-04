#include <stdio.h>

int main(void) {
	
	int n,arr[20],i,j,count;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
		
	{
		count=0;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count+=1;
			}
		}
		if(count==1)
	            {
		printf("%d\t",arr[i]);
	            }
	}

	return 0;
}
