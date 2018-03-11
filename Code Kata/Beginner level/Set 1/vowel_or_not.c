#include <stdio.h>

int main(void) {
	char ch,z;
	scanf("%c",&ch);
	z=tolower(ch);
	if(z=='a'||z=='e'||z=='i'||z=='o'||z=='u')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
	
	return 0;
}
