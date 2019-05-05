#include <cstdio>
using namespace std;

int month[13][2] = {{0,0}, {31,31}, {28,29}, {31,31}, {30,30}, {31,31}, {30,30}, {31,31}, {31,31}, {30,30}, {31,31}, {30,30}, {31,31}};

int isLeap(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
	int time1, time2;
	int y1, m1, d1, y2, m2, d2;
	while(scanf("%d%d", &time1, &time2) != EOF)
	{
		if(time1 > time2)
		{
			int temp = time1;
			time1 = time2;
			time2 = temp;
		}
		int ans = 1;
		y1 = time1 / 10000;
		m1 = (time1 % 10000) / 100;
		d1 = time1 % 100;
		y2 = time2 / 10000;
		m2 = (time2 % 10000) / 100;
		d2 = time2 % 100;
		while(y1 < y2 || m1 < m2 || d1 < d2)
		{
			d1++;
			if(d1 == month[m1][isLeap(y1)] + 1)
			{
				m1++;
				d1 = 1;
			}
			if(m1 == 13)
			{
				y1++;
				m1 = 1;
			}
			ans++;
		}
		printf("%d\n", ans);
	}
}
