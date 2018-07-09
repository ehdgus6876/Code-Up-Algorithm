#include <stdio.h>

int main()
{
	int h, b, c, s;
	float bit;

	scanf("%d %d %d %d", &h, &b, &c, &s);
	bit = h * b*c*s;

	
	printf("%0.1f MB\n", (((bit / (float)8) / (float)1024) / (float)1024));
	return 0;
}