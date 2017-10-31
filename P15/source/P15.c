#include<stdio.h>
#include<stdlib.h>

int maximum(int x, int y, int z);
int main(void)
{
	int number1;
	int number2;
	int number3;
	printf("請輸入三個數字");
	scanf_s("%d%d%d",&number1,&number2,&number3);
	printf("最大的數字為%d\n",maximum(number1,number2,number3));
	system("pause");
	return 0;
}
int maximum(int x, int y, int z)
{
	int max = x;
	if (y > max)
	{
		max = y;
	}
	if (z > max)
	{
		max = z;
	}
	return max;
}
