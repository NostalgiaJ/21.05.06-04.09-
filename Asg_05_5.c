#include <stdio.h>

int main()
{
	char langname;						// program language's name

	printf(">> Input the character: ");
	scanf("%c", &langname);

	switch (langname)
	{
	case 67: case 99:
		printf("-> C language.\n");
		break;
	case 80: case 112:
		printf("-> Python.\n");
		break;
	case 74: case 106:
		printf("-> JAVA.\n");
			break;
	case 76: case 108:
		printf("-> LISP.\n");
		break;
	default:
		printf("-> Input error!\n");
		break;
	}

	return 0;
}