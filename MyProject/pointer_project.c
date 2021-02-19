#include <stdio.h>
#include <time.h>

int level;
int arrayFish[6];
int * cursor;

void initData(); 
void printFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

//물고기가 6마리가 있어요
//이들은 어항에 살고 있는데 사막이에요
//사막이 너무 더워서 물이 아주 빨리 증발해요
//물이 다 증발하기 전에 부지런히 어항에 물을 줘서 물고기를 살려주세요
//물고기는 시간이 지날수록 점점 커져서 나중에는 먹어요

int main(void)
{
	long startTime = 0; // 게임시작시간
	long totalElapsedTime = 0; // 총경과시간
	long prevElapsedTime = 0; // 직전 경과시간 ( 최근에 물을 준 시간간격 )

	int num; // 몇번 어항에 물을 줄것인지 , 사용자입력
	initData(); //초기화

	cursor = arrayFish; // 배열과 똑같이 cursor[0]....cursor[1] .. 처럼 이용가능
	startTime = clock(); // 현재시간을 millisecond (1000분의 1초) 단위로 반환

	while (1)
	{
		printFishes();
		printf("몇 번 어항에 물을 주시겠어요?");
		scanf_s("%d", &num);

		//입력값 체크
		if (num < 1 || num > 6)
		{
			printf("\n입력값이 잘못 되었습니다\n");
			continue;
		}

		//총경과시간
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; // 현재시간에서 StartTime을 빼준다. -> 초로 확인하기 위해서 CLOCKS_PER_SEC 나눠줌 1000단위로 나눔
		printf("총 경과 시간 : %ld 초 \n", totalElapsedTime);
		// 직전에 물 준 시간 ( 마지막으로 물 준시간 ) 이후로 흐른 시간 
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld 초 \n",prevElapsedTime);

		//어항의 물을 감소 (증발)
		decreaseWater(prevElapsedTime);

		//사용자가 입력한 어항에 물을 준다.
		//1. 어항의 물이 0이면? 물을 주지않는다.
		if (cursor[num - 1] <= 0)
		{
			printf("%d번 물고기는 이미 죽었습니다.. 물을 주지 않습니다\n", num);
		}
		// 2. 어항의 물이 0이 아닌 경우? 물을 준다 ! 100을 넘지 않는지 체크
		else if (cursor[num - 1] + 1 <= 100)
		{
			//물을 준다
			printf("%d 번 어항에 물을 줍니다 \n\n", num);
			cursor[num - 1] += 1; // ==  cursor[num-1] = cursor[num-1]+1
		}
		//레벨업을 할건지 확인 (레벨업은 20초마다 한번씩 수정)
		if (totalElapsedTime / 20 > level - 1)
		{
			//레벨업
			level++; // level :1 -> level : 2 ->level : 3
			printf("*** 축 레벨업! 기존 %d 레벨에서 %d 레벨로 업그레이드 ***\n\n", level - 1, level);
			//최종레벨 5
			if (level == 5)
			{
				printf("\n\n 축하합니다. 최고레벨을 달성하였습니다. 게임을 종료합니다\n\n");
				exit(0);
			}
		}
		//모든 물고기가 죽었는지 확인
		if (checkFishAlive() == 0)
		{
			//물고기가 모두 죽음
			printf("모든 물고기가.. 죽음 \n");
			exit();
		}
		else
		{
			//최소 한마리 이상의 물고기는 살아있음
			printf("물고기가 아직 살아있어요!\n");
		}
		prevElapsedTime = totalElapsedTime; 
		
		//10초 ->15초 (5초 : prevElapsedTime -> 15초) -> 25초 (10초..?)

	}
	return 0;


}


void initData()
{
	level = 1;  //게임레벨 (1~5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // 어항의 물 높이 (0~100)
	}
}

void printFishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime);// 3 .. 난이도 조절을 위한 값
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}
int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1; // 참 True
	}
	return 0;
}