#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��й�ȣ�� �Է¹޾Ƽ�
//�´� ��� ����ϱ⸦ �о�ͼ� �����ְ�, ��� �ۼ��ϵ��� �մϴ�.
//Ʋ�� ��� ��� �޽����� ǥ���ϰ� �����մϴ�.
#define MAX 10000
int main(void)
{
	//fgets, fputs Ȱ��
	char line[MAX];
	char contents[MAX];
	char password[20];
	char c;

	printf("'����ϱ�'�� ���Ű��� ȯ���մϴ� \n");
	printf("��й�ȣ�� �Է��ϼ��� : ");

	//getchar() / getch() �� ����?
	//getchar() : ���͸� �Է¹޾ƾ� ������ �մϴ�.
	//getch()   : Ű �Է½� �ٷιٷ� ������ �մϴ�.
	int i = 0;
	while (1)
	{
		c = getch();
		if (c == 13)//enter ��й�ȣ �Է�����
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
	//��й�ȣ : �����ڵ� skehzheld
	printf("\n\n === ��й�ȣ Ȯ���� ... === \n\n");
	if (strcmp(password, "skehzheld") == 0) // ��й�ȣ ��ġ
	{
		printf("==== ��й�ȣ Ȯ�� �Ϸ� ==== \n\n");
		char* fileName = "C:\\Users\\rlawl\\OneDrive\\���� ȭ��\\Game\\secretdiary.txt";
		FILE* file = fopen(fileName, "a+b"); // ������ ������ ����, ������ ������ �ں��� ������ �߰��Ѵ�.
		if (file == NULL)
		{
			printf("���� ���� ���� \n");
			return 1;
		}
		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}

		printf("\n\n ������ ��� �ۼ��ϼ��� ! �����Ͻ÷��� EXIT�� �Է��ϼ��� \n\n");
	

		while (1)
		{
			scanf("%[^\n]", contents); //����[\n] �� ������ ������ �о���� (�ѹ���)
			getchar(); //Enter �Է� (\n) Flush ó��
			if(strcmp(contents,"EXIT")==0)
			{
				printf("����ϱ� �Է��� �����մϴ�.\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file);
		}
		fclose(file);
	}
	else // ��й�ȣ Ʋ�����
	{
		printf("=== ��й�ȣ�� Ʋ�Ⱦ�� ====\n\n");
		printf("��!! ��� ������?!! ���� �� �ϱ����� !!! \n\n\n");
	}
	return 0;
}