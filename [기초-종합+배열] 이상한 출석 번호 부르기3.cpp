#include <stdio.h>

int main()
{
	int a, b, i,d;
	int t[10000] = {};

	scanf("%d", &a);

	for (i = 0; i < a; i++)
	{
		scanf("%d", &b);
		t[i] = b;
	}
	d = t[0];
	for (i = 0; i < a-1; i++)
	{
		if (d>=t[i+1])
			d = t[i + 1];
	}
	printf("%d\n", d);
	
	return 0;
}