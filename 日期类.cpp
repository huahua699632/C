#include <cstdio>
using namespace std;

int day[13][2] = {{0,0}, {31,31}, {28,29}, {31,31}, {30,30}, {31,31}, {30,30}, {31,31}, {31,31}, {30,30}, {31,31}, {30,30}, {31,31}};

int isLeap(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
	int m = 0;
	scanf("%d", &m);
	while(m--)
	{
		int y, m, d;
		scanf("%d %d %d", &y, &m, &d);
			d++;
			if(d == day[m][isLeap(y)] + 1)
			{
				m++;
				d = 1;
			}
			if(m == 13)
			{
				y++;
				m = 1;
			}
			printf("%04d-%02d-%02d\n", y, m, d);
	}
	return 0;
}
