#include <stdio.h>

int main()
{
	int a, x, y;
	int i, j;
	int b[19][19] = {};
	scanf("%d", &a);

	for (i = 0; i < a; i++)
	{
		scanf("%d %d", &x, &y);
		b[x-1][y-1] = { 1 };
	}
	for (i = 0; i < 19; i++)
	{
		
		for (j = 0; j < 19; j++)
		{
			printf("%d", b[i][j]);
		}
		printf("\n");

	}
	return 0;
}
	