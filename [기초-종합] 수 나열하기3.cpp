#include <stdio.h>

int main()
{
	int a, m, d, n;
	int i = 1;

	scanf("%d %d %d %d", &a, &m, &d,&n);
	int sum = a;
	while (i<n)
	{
		sum = (sum*m) + d;
		i++;
	}
	printf("%d\n", sum);
	return 0;

}