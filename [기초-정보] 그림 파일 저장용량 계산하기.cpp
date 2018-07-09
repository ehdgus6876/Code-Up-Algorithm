#include <stdio.h>

int main()
{
	float bit, r, g, b;
	scanf("%f %f %f", &r, &g, &b);
	

	bit = r * g*b;
	printf("%0.2f MB\n", (((bit / 8) / 1024) / 1024));
	return 0;
}