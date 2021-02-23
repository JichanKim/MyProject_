#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//비밀번호를 입력받아서
//맞는 경우 비밀일기를 읽어와서 보여주고, 계속 작성하도록 합니다.
//틀린 경우 경고 메시지를 표시하고 종료합니다.
#define MAX 10000
int main(void)
{
	//fgets, fputs 활용
	char line[MAX];
	char contents[MAX];
	char password[20];
	char c;

	printf("'비밀일기'에 오신것을 환영합니다 \n");
	printf("비밀번호를 입력하세요 : ");

	//getchar() / getch() 의 차이?
	//getchar() : 엔터를 입력받아야 동작을 합니다.
	//getch()   : 키 입력시 바로바로 동작을 합니다.
	int i = 0;
	while (1)
	{
		c = getch();
		if (c == 13)//enter 비밀번호 입력종료
		{
			password[i] = '\0';
			break;
		}
		else
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}
	//비밀번호 : 나도코딩 skehzheld
	printf("\n\n === 비밀번호 확인중 ... === \n\n");
	if (strcmp(password, "skehzheld") == 0) // 비밀번호 일치
	{
		printf("==== 비밀번호 확인 완료 ==== \n\n");
		char* fileName = "C:\\Users\\rlawl\\OneDrive\\바탕 화면\\Game\\secretdiary.txt";
		FILE* file = fopen(fileName, "a+b"); // 파일이 없으면 생성, 파일이 있으면 뒤부터 내용을 추가한다.
		if (file == NULL)
		{
			printf("파일 열기 실패 \n");
			return 1;
		}
		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}

		printf("\n\n 내용을 계속 작성하세요 ! 종료하시려면 EXIT를 입력하세요 \n\n");
	

		while (1)
		{
			scanf("%[^\n]", contents); //새줄[\n] 이 나오기 전까지 읽어들임 (한문장)
			getchar(); //Enter 입력 (\n) Flush 처리
			if(strcmp(contents,"EXIT")==0)
			{
				printf("비밀일기 입력을 종료합니다.\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file);
		}
		fclose(file);
	}
	else // 비밀번호 틀린경우
	{
		printf("=== 비밀번호가 틀렸어요 ====\n\n");
		printf("꺅!! 당신 누구여?!! 감히 내 일기장을 !!! \n\n\n");
	}
	return 0;
}