#include <cstdio>
using namespace std;
const int maxN = 100010;
 
struct person{
	char name[6];
	int year;
	int month;
	int day;
}oldest, youngest, left, right, temp;

void init()
{
	youngest.year = left.year = 1814;
	oldest.year = right.year = 2014;
	youngest.month = oldest.month = left.month = right.month = 9;
	youngest.day = oldest.day = left.day = right.day = 6;
}

bool lessequ(person a, person b)
{
	if(a.year != b.year)
		return a.year <= b.year;
	else if(a.month != b.month)
		return a.month <= b.month;
	else 
		return a.day <= b.day;
}

bool moreequ(person a, person b)
{
	if(a.year != b.year)
		return a.year >= b.year;
	else if(a.month != b.month)
		return a.month >= b.month;
	else 
		return a.day >= b.day;
}

int main()
{
	init();
	int n;
	int count = 0;
	scanf("%d", &n);
	if(n <= maxN)
	{
		while(n--)
		{
			scanf("%s %d/%d/%d", temp.name, &temp.year, &temp.month, &temp.day);
			if(lessequ(temp, right) && moreequ(temp, left))
			{
				count++;
				if(lessequ(temp, oldest))
					oldest = temp;
				if(moreequ(temp, youngest))
					youngest = temp;
			} 
				
		}
	}
	if(count == 0)
		printf("0\n");
	else
		printf("%d %s %s\n", count, oldest.name, youngest.name);
}
