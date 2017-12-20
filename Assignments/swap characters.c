#include <stdio.h>
#include<string.h>
int main(void) {
	int i,n,temp;
	char a[10];
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<=n;i+=2)
	{
		if(n%2==0)
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			printf("%c%c",a[i],a[i+1]);
		}
	}
	for(i=0;i<n-1;i+=2)
	{
			if(n%2!=0)
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			printf("%c%c%c",a[i],a[i+1],a[n-1]);	
		}
	}

	return 0;
}
