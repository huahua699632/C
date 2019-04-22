#include <stdio.h>
#include <string.h>
using namespace std;

struct Student{
	int num;
	char name[20];
	int grade1;
	int grade2;
	int grade3;
};

void input(Student* p)
{
	int _num;
	char _name[20];
	int _grade1;
	int _grade2;
	int _grade3;
	for(int i = 0; i < 5; i++)
	{
		scanf("%d %s %d %d %d", &_num, _name, &_grade1, &_grade2, &_grade3);
		(p + i)->num = _num;
		strcpy((p + i)->name, _name);
		(p + i)->grade1 = _grade1;
		(p + i)->grade2 = _grade2;
		(p + i)->grade3 = _grade3;
	}
}

void output(Student* p)
{
	for(int i = 0; i < 5; i++)
	{
		printf("%d %s %d %d %d\n", (p + i)->num, (p + i)->name, (p + i)->grade1, (p + i)->grade2, (p + i)->grade3);
	}
}
int main()
{
	Student student[5];
	input(student);
	output(student);
}
