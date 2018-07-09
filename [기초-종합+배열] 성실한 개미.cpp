#include <stdio.h>


int main()
{
	int a[11][11] = {};

	int i, j;
	int b = 2;
	for (i = 1; i < 11; i++)
	{
		for (j = 1; j < 11; j++)
		{
			scanf("%d", &a[i][j]);
		}
		
	}
	i = 2;
	j = 2;
	while (a[i][j]!=2)
	{
		a[i][j] = 9;
		if (a[i][j + 1] != 1)
		{
			j += 1;
		}
		else if (a[i + 1][j] != 1)
		{
			i += 1;
		}
		else break;
	}
	a[i][j] = 9;
	for (i = 1; i < 11; i++)
	{
		for (j = 1; j < 11; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
