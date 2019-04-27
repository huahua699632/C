#include <cstdio>
using namespace std;

struct Student{
	char name[11];
	char sno[11];
	int grade;
}student[100000];

int min_i, max_i;
int max = 0;
int min = 999;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%s", student[i].name);
		getchar();
		scanf("%s", student[i].sno);
		scanf("%d", &student[i].grade);
	}
	for(int i = 0; i < n; i++)
	{
		if(student[i].grade >= 0 && student[i].grade <= 100)
		{
			if(student[i].grade > max)
			{
				max_i = i;
				max = student[i].grade;
			}	
		}
		
	}
	for(int i = 0; i < n; i++)
	{
		if(student[i].grade >= 0 && student[i].grade <= 100)
		{
			if(student[i].grade < min)
			{
				min_i = i;
				min = student[i].grade;
			}
		}
		
	}
	printf("%s %s\n", student[max_i].name, student[max_i].sno);
	printf("%s %s\n", student[min_i].name, student[min_i].sno);
}
