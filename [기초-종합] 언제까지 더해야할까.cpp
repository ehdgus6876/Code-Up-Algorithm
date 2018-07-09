#include <stdio.h>

int main()
{
	int a;
	int sum = 0;
	int cnt=0;
	scanf("%d", &a);
	while (sum < a)
	{
		cnt ++;
		sum = sum + cnt;
		
		
	}
	printf("%d\n", cnt);
	
	return 0;
}
