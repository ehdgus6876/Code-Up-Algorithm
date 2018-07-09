#include <stdio.h>

int main()
{
	int a;
go:
	scanf("%d", &a);
	printf("%d\n", a);
	if (a != 0)
		goto go;
	else
		goto end;

	end:
	return 0;


}