#include <cstdio>
using namespace std;
const int maxN = 20;

struct Student{
	char name[100];
	char gender[100];
	int age = -1;
}student[maxN];

int m;

int main()
{
	scanf("%d", &m);
	for(int k = 0; k < m; k++)
	{
		int n;
		scanf("%d", &n);
		if(n <= maxN)
		{
			while(n--)
			{
				int i ;
				scanf("%d", &i);
				scanf("%s%s%d", student[i].name, student[i].gender, &student[i].age);
			}
		}
		int id;
		scanf("%d", &id);
		if(student[id].age == -1)
			return 0;
		else
			printf("%d %s %s %d\n", id, student[id].name, student[id].gender, student[id].age); 
	}
	return 0;
} 
