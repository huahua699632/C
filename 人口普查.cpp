#include <cstdio>
using namespace std;
const int maxN = 100010;
 
struct Person{
	char name[6];
	int year;
	int month;
	int day;
}person[maxN];

int count;
int max = -1;
int min = 201;
int max_i, min_i;

int main()
{
	int n;
	scanf("%d", &n);
	if(n <= maxN)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%s", person[i].name);
			scanf("%d/%d/%d", &person[i].year, &person[i].month, &person[i].day);
			if(person[i].year > 2014 || (person[i].year == 2014 && person[i].month > 9) || (person[i].year == 2014 && person[i].month == 9 && person[i].day > 6))
				continue;		
			else if(person[i].year > 1814 || (person[i].month == 1814 && person[i].month > 9) || (person[i].year == 1814 && person[i].month == 9 && person[i].day >= 6))
			{
				count++;
				int age = (2014 - person[i].year) * 365 + (9 - person[i].month) * 30 + 6 - person[i].day;
				if(age >= max)
				{
					max_i = i;
					max = age;
				}
				if(age <= min)
				{
					min_i = i;
					min = age;
				}
			}
		}
	}
	if(count == 0)
		printf("%d", count);
	else
		printf("%d %s %s", count, person[max_i].name, person[min_i].name);
	return 0;
}
