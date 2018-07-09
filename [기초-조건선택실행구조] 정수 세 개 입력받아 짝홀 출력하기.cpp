#include <stdio.h>

int main()
{
	int i[3];
	int a;

	

	for (a = 0; a <3; a++)
	{
		scanf("%d", &i[a]);
		if (i[a] % 2 == 0)
			printf("even\n");
		else
			printf("odd\n");
	}
	return 0;
}