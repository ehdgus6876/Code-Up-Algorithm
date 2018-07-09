#include <stdio.h>

int main()
{
	int i;
	scanf("%d", &i);

	if (i == 12 || i == 1 || i == 2)
		printf("winter\n");
	else if (i == 3 || i == 4 || i == 5)
		printf("spring\n");
	else if (i == 6 || i == 7 || i == 8)
		printf("summer\n");
	else
		printf("fall");

	return 0;
}