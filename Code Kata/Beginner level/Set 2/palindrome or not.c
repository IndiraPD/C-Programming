#include <stdio.h>

int main(void) {
 int a,x,y,z;
 scanf("%d",&a);
 x=a;
 while(a!=0)
 {
 	y=a%10;
 	z=z*10+y;
 	a=a/10;
 }
 if(z==x)
 {
 	printf("palindrome");
 }
 else
 {
 	printf("not a palindrome");
 }
	return 0;
}
