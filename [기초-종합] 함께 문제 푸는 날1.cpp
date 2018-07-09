#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	int i = 1;
	while (i%b != 0 || i % a != 0 || i % c != 0)
		i++;
	printf("%d\n", i);
	return 0;
	
}