#include <time.h>
#include <stdio.h>
int main_random(void)
{
//	srand(time(NULL));  //난수 초기화
//	int num = rand() % 3+1; // 1~3
	/*printf("난수초기화 이전..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}
	srand(time(NULL));
	printf("난수초기화 후..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}*/
	//srand(time(NULL));
	//int i = rand() % 3;
	//if (i == 0)
	//{
	//	printf("가위\n");
	//}
	//else if (i == 1)
	//{
	//	printf("바위\n");
	//}
	//else if (i == 2)
	//{
	//	printf("보\n");
	//}
	//else
	//{
	//	printf("몰라요\n");
	//}
	//srand(time(NULL));
	//int i = rand() % 3;
	//switch (i)
	//{
	//case 0:printf("가위\n"); break;
	//case 1:printf("바위\n"); break;
	//case 2:printf("보\n"); break;
	//case 3:printf("몰라요\n"); break;
	//}
	srand(time(NULL));
	int num = rand() % 100 + 1; //1~100사이의 숫자
	int answer = 0; //정답
	int chance = 5; //기회
	while (chance > 0)
	{
		printf("남은기회 : %d 번", chance--);
		printf("숫자를 맞춰보세요 (1~100)");
		scanf_s("%d", &answer);
		if (answer > num)
		{
			printf("DOWN ↓ \n\n");
		}
		else if (answer < num)
		{
			printf("UP ↑ \n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다 !\n\n");
			break;
		} 
		else
		{
			printf("에러가 발생했습니다.\n\n");

		}
		if (chance == 0)
		{
			printf("모든 기회를 다 사용하셨습니다 \n");
			break;
		}
	}
	return 0;
}