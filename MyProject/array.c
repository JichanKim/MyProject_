#include <stdio.h>

int main(void)
{
	//int subway_1 = 30;
	//int subway_2 = 40;
	//int subway_3 = 50;

	//printf("지하철 1호차에 %d 명이 타고있습니다.\n", subway_1);
	//printf("지하철 2호차에 %d 명이 타고있습니다.\n", subway_2);
	//printf("지하철 3호차에 %d 명이 타고있습니다.\n", subway_3);

	//int subway_array[3]; //여러개의 변수를 동시에 생성
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;


	//for (int i = 0; i < 3; i++)
	//{
	//	printf("지하철 %d호차에 %d 명이 타고있습니다.\n",i+1 , subway_array[i]);

	//}

	//값은 초기화를 반드시 해야함
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n",arr[i]);
	//}

	//float arr_f[5] = { 1.0f,2.0f,3.0f };
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%.2f\n", arr_f[i]);
	//}

	//문자 vs 문자열
	//char c = 'a';
	//printf("%c\n", c);

	//문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0'이 포함되어야함
	//char str[6] = "coding"; //[c][o][d][i][n][g]

	//char str[7] = "codinh"; //[c][o][d][i][n][g][\0]
	//printf("%s\n", str);

	//char str[] = "coding";
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str));
	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n", str[i]);
	//}

	char kor[] = "떙떙떙떙";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	//영어 1글자 : 1byte
	//한글 1글자 : 2byte 



	return 0;
}