#include <stdio.h>

int main_loop(void)
{
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}*/
	/*int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);
	}*/
	/*
	int i = 1;
	do {
		printf("Hello World %d\n", i++);

	} while (i<=10);
	*/

	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d�� ���\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf(" %d x %d = %d\n",i,j,i*j);
		}
	}*/
	/*
	ssss*
	sss**
	ss***
	s****
	*****
	*/
	/*
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5-1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/
	int floor;
	printf("�� ������ �װڴ���?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
		return 0;
}