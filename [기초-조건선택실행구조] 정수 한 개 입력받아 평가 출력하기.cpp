#include <stdio.h>

int main()
{
	int score;

	scanf("%d", &score);

	if (score <= 100 && score >= 90)
		printf("A\n");
	else if (score <= 89 && score >= 70)
		printf("B\n");
	else if (score <= 69 && score >= 40)
		printf("C\n");
	else
		printf("D\n");
	return 0;
}