#include <stdio.h>

int main(void) {
	int a,b,i;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=a;i<b;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
