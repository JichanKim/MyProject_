#include <stdio.h>

int main_printfscanf(void)
{
	//�̸�, ����, ������, Ű, ���˸�
	char name[256];
	int age;
	float weight;
	double height;
	char what[256];

	printf("�̸��� �����Դϱ�? : ");
	scanf_s("%s", name, sizeof(name));
	printf("��� �Դϱ�? :");
	scanf_s("%d", &age);
	printf("�����԰� ���Դϱ�? :");
	scanf_s("%f", &weight);
	printf("Ű�� ���Դϱ�?:");
	scanf_s("%lf", &height);
	printf("���˸��� �����Դϱ�?:");
	scanf_s("%s", what, sizeof(what));

	printf("\n\n---����������--\n\n");
	printf("�̸��� : %s\n", name);
	printf("���̴�:%d\n", age);
	printf("�����Դ�: %.2f\n", weight);
	printf("Ű��:%.2lf\n", height);
	printf("���˴�:%s\n", what);
	return 0;
}