#include <stdio.h>
#include <string.h>
using namespace std;
const int N = 20;

struct student {
    int num;
    char name[20];
    char sex;
    int age;
};
int n;

int main()
{
	student _student[N];
	student *p = _student;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		int temp_num;
		char temp_name[20];
		char temp_sex;
		int temp_age;
		scanf("%d %s %c %d", &temp_num, temp_name, &temp_sex, &temp_age);
		(p + i) -> num = temp_num;
		strcpy((p +i) -> name, temp_name);
		(p + i) -> sex = temp_sex;
		(p + i) -> age = temp_age;
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d %s %c %d\n", (p + i) -> num, (p +i) -> name, (p + i) -> sex, (p + i) -> age);
	}
}
