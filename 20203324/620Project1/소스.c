#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//fabs(a - b) < 0.0001 실수가 포함되었을때 비교



int AddToTotal(int num)
{
	static int total = 0;
	total += num;
	return total;
}




int main()
{
	int num,i;
	for (i = 0; i < 3; i++)
	{
		printf("입력 %d : ", i + 1);
		scanf("%d", &num);
		printf("누적 : %d \n", AddToTotal(num));
	}
	return 0;
}

