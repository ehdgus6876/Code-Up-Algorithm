#include <stdio.h>

int main()
{
	int a, r, n;
	int d=1;
	scanf("%d %d %d", &a, &r, &n);
	int i;
	for (i = 1; i < n; i++)
	{
		d = d*r;
	}
	printf("%d\n", d*a);
	return 0;
}