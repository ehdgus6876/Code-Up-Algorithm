#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", a + b + c);
	printf("%.01f\n", (float)(a + b + c)/(float)3);
}