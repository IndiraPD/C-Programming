#include <stdio.h>

int main(void) {
	int a;
	scanf("%d",&a);
	if(a%400==0)
	{
		printf("leap year");
	}
	else if(a%100==0)
	{
		printf("not a leap year");
	}
	else if(a%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap year");
	}
	return 0;
}
