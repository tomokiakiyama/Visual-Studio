#include<stdio.h>
int main(void)
{
	int x;

	do {
		printf("1以上9以下の数を入力してください\n");
		scanf_s("%d", &x);
	} while (x < 1 || x>9);
	return 0;
}