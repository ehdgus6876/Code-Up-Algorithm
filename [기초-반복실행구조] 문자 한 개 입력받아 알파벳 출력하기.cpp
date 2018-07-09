#include <stdio.h>

int main()
{
	char a;

	scanf("%c", &a);
	int i=0;
	for (i = 0; i <= a - 97; i++)
	{
		printf("%c ", 97 + i);
	}
	return 0;
}