#include <stdio.h>

int main()
{
	char alphabet;
	
	printf(">> Input char: ");
	scanf("%c", &alphabet);

	if (alphabet >= 'a' && alphabet <= 'z')
		printf("-> Changed lower case %c to upper case %c!\n", alphabet, alphabet - 32);
	else
		printf("-> Input error!\n");

	return 0;
}