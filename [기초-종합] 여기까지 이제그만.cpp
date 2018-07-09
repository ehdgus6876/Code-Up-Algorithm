#include <stdio.h>

int main()
{
	int a;
	int sum = 0;
	int i;

	scanf("%d", &a);

	for (i = 1; sum <= a; i++)
	{
		sum =sum+ i;
	}
	printf("%d\n", sum);
	return 0;

}