#include <cstdio>
#include <cstring>
using namespace std;
const int maxN = 1000;
const int maxM = 10000;

struct Studnet{
	char id[100];
	char name[100];
	char gender[5];
	int age;
}student[maxN];

int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		if(n <= maxN)
		{
			for(int i = 0; i < n; i++)
			{
				scanf("%s %s %s %d", student[i].id, student[i].name, student[i].gender, &student[i].age);
			}
		}
		int m;
		scanf("%d", &m);
		if(m <= maxM)
		{
			while(m--)
			{
				int flag = 0;
				char temp[20];
				scanf("%s", temp);
				for(int i = 0; i < n; i++)
				{
					if(strcmp(temp, student[i].id) == 0)
					{
						flag = 1;
						printf("%s %s %s %d\n", student[i].id, student[i].name, student[i].gender, student[i].age);
						break;
					}
				}
				if(flag == 0)
					printf("No Answer!\n");
			}
		}
	}
	
	return 0;
}
