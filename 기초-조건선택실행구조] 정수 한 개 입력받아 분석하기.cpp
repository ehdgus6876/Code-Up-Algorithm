#include <stdio.h>

int main()
{
	int i;

	scanf("%d", &i);

	if (i < 0)
		printf("minus\n");
	else
		printf("plus\n");

	if (i % 2 == 0)
		printf("even\n");
	else
		printf("odd\n");

	return 0;
}