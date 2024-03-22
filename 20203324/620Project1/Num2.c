#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n=0;
	int j = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		
		j += n;
		printf("%d\n",j);
	}

	return 0;
}