#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

struct Student{
	int num;
	char name[20];
	int grade1;
	int grade2;
	int grade3;
}student[10];
double avg_course[3];
int sum_grade1;
int sum_grade2;
int sum_grade3;
double avg_student[10];
int k = 0;

int main()
{
	for(int i = 0; i < 10; i++)
	{
		scanf("%d %s %d %d %d", &student[i].num, student[i].name, &student[i].grade1, &student[i].grade2, &student[i].grade3);
		sum_grade1 = sum_grade1 + student[i].grade1;
		sum_grade2 = sum_grade2 + student[i].grade2;
		sum_grade3 = sum_grade3 + student[i].grade3;
		avg_student[i] = (float)(student[i].grade1 + student[i].grade2 + student[i].grade3) / 3;
	}
	avg_course[0] = (float)sum_grade1 / 10;
	avg_course[1] = (float)sum_grade2 / 10;
	avg_course[2] = (float)sum_grade3 / 10;
	for(int i = 1; i < 10; i++)
	{
		if(avg_student[i] > avg_student[k])
			k = i;
	}
	printf("%.2lf %.2lf %.2lf\n", avg_course[0], avg_course[1], avg_course[2]);
	printf("%d %s %d %d %d\n", student[k].num, student[k].name, student[k].grade1, student[k].grade2, student[k].grade3);
}
