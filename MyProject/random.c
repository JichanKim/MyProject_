#include <time.h>
#include <stdio.h>
int main_random(void)
{
//	srand(time(NULL));  //���� �ʱ�ȭ
//	int num = rand() % 3+1; // 1~3
	/*printf("�����ʱ�ȭ ����..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}
	srand(time(NULL));
	printf("�����ʱ�ȭ ��..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}*/
	//srand(time(NULL));
	//int i = rand() % 3;
	//if (i == 0)
	//{
	//	printf("����\n");
	//}
	//else if (i == 1)
	//{
	//	printf("����\n");
	//}
	//else if (i == 2)
	//{
	//	printf("��\n");
	//}
	//else
	//{
	//	printf("�����\n");
	//}
	//srand(time(NULL));
	//int i = rand() % 3;
	//switch (i)
	//{
	//case 0:printf("����\n"); break;
	//case 1:printf("����\n"); break;
	//case 2:printf("��\n"); break;
	//case 3:printf("�����\n"); break;
	//}
	srand(time(NULL));
	int num = rand() % 100 + 1; //1~100������ ����
	int answer = 0; //����
	int chance = 5; //��ȸ
	while (chance > 0)
	{
		printf("������ȸ : %d ��", chance--);
		printf("���ڸ� ���纸���� (1~100)");
		scanf_s("%d", &answer);
		if (answer > num)
		{
			printf("DOWN �� \n\n");
		}
		else if (answer < num)
		{
			printf("UP �� \n\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ� !\n\n");
			break;
		} 
		else
		{
			printf("������ �߻��߽��ϴ�.\n\n");

		}
		if (chance == 0)
		{
			printf("��� ��ȸ�� �� ����ϼ̽��ϴ� \n");
			break;
		}
	}
	return 0;
}