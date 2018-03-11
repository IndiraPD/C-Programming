#include <stdio.h>

int main(void) {
	int d,b,n,count=0;
	scanf("%d",&n);
	d=n;
	while(d>0)
	{
		b=d/10;
		count++;
		d=b;
	}
	printf("%d",count);
	return 0;
}
