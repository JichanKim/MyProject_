#include <stdio.h>

int main_printfscanf(void)
{
	//이름, 나이, 몸무게, 키, 범죄명
	char name[256];
	int age;
	float weight;
	double height;
	char what[256];

	printf("이름이 무엇입니까? : ");
	scanf_s("%s", name, sizeof(name));
	printf("몇살 입니까? :");
	scanf_s("%d", &age);
	printf("몸무게가 몇입니까? :");
	scanf_s("%f", &weight);
	printf("키가 몇입니까?:");
	scanf_s("%lf", &height);
	printf("범죄명은 무엇입니까?:");
	scanf_s("%s", what, sizeof(what));

	printf("\n\n---범죄자정보--\n\n");
	printf("이름은 : %s\n", name);
	printf("나이는:%d\n", age);
	printf("몸무게는: %.2f\n", weight);
	printf("키는:%.2lf\n", height);
	printf("범죄는:%s\n", what);
	return 0;
}