#include <stdio.h>

int main()
{
	int a,t;
	int b[23] = {};
	int i;
	scanf("%d", &a);
	
	for (i = 0; i < a; i++)
	{
		scanf("%d", &t);
		b[t-1] = b[t-1] + 1;
	}
	for (i = 0; i < 23; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}