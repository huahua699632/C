#include <stdio.h>
#include <string.h>
using namespace std;
const int N = 100;

struct Person{
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int classnum; 
        char position[10];
    }category;
};
int n;

int main()
{
	scanf("%d", &n);
	Person person[N];
	for(int i = 0; i < n; i++)
	{
		int _num;
		char _name[10];
		char _sex;
		char _job;
		int _class;
		char _position[10];
		scanf("%d %s %c %c", &_num, _name, &_sex, &_job);
		if(_job == 's')
		{
			scanf("%d", &_class);
			person[i].num = _num;
			strcpy(person[i].name, _name);
			person[i].sex = _sex;
			person[i].job = _job;
			person[i].category.classnum = _class;
		}
		else if(_job == 't')
		{
			scanf("%s", _position);
			person[i].num = _num;
			strcpy(person[i].name, _name);
			person[i].sex = _sex;
			person[i].job = _job;
			strcpy(person[i].category.position, _position);
		}
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d %s %c %c ", person[i].num, person[i].name, person[i].sex, person[i].job);
		if(person[i].job == 's')
			printf("%d\n", person[i].category.classnum);
		else if(person[i].job == 't')
			printf("%s\n", person[i].category.position);
	}
 } 
