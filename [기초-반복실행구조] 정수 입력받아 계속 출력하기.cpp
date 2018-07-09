#include <stdio.h>

int main()
{
	int a,b;
	int i = 0;
	scanf("%d", &b);
	while (i<b)
	{
		scanf("%d", &a);
		printf("%d\n", a);
		i++;
	}
	return 0;
}