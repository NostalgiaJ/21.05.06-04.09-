#include <stdio.h>

int main()
{
	int rank;

	printf(">> Input grade(1~7): ");
	scanf("%d", &rank);

	if (rank == 1)
		printf("�� Very good! ��\n");
	else if (rank == 2 || rank == 3)
		printf("�� Good! ��\n");
	else if (rank == 4 || rank == 5)
		printf("�� So So! ��\n");
	else if (rank == 6 || rank == 7)
		printf("�� Cheer up! ��\n");
	else
		printf("�� Input error! ��\n");

	return 0;
}