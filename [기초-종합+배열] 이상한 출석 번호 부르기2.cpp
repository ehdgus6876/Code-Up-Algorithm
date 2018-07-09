#include <stdio.h>

int main()
{
	int a, i,t;
	int b[10000] = {};

	scanf("%d", &a);
	for (i = 0; i < a; i++)
	{
		scanf("%d", &t);
		b[i] = t;
		
	}
	for (i = a - 1; i >= 0; i--)
	{
		printf("%d ", b[i]);

	}
	return 0;
}