#include <cstdio>
using namespace std;

int f_count, m_count;

struct student{
	char name[11];
	char gender;
	char id[11];
	int grade;
}temp, f_highest, m_lowest;

void init()
{
	f_highest.grade = -1;
	m_lowest.grade = 101;
}

int main()
{
	init();
	int n;
	scanf("%d", &n);
	if(n == 0)
		return 0;
	while(n--)
	{
		scanf("%s %c %s %d", temp.name, &temp.gender, temp.id, &temp.grade);
		if(temp.gender == 'F')
		{
			f_count++;
			if(temp.grade >= f_highest.grade)
				f_highest = temp;
		}
		else if(temp.gender == 'M')
		{
			m_count++;
			if(temp.grade <= m_lowest.grade)
				m_lowest = temp;
		}
	}
	if(f_count == 0)
		printf("Absent\n%s %s\nNA\n", m_lowest.name, m_lowest.id);
	else if(m_count == 0)
		printf("%s %s\nAbsent\nNA\n", f_highest.name, f_highest.id);
	else
		printf("%s %s\n%s %s\n%d\n", f_highest.name, f_highest.id, m_lowest.name, m_lowest.id, f_highest.grade - m_lowest.grade);
}
