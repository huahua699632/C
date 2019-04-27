//测试点1 2 3 4答案错误
#include <cstdio>
using namespace std;

struct person{
	char id[16];
	int in_hour, in_minute, in_second;
	int out_hour, out_minute, out_second;
}temp, ans1, ans2;

bool less(int a1, int b1, int c1, int a2, int b2, int c2)
{
	if(a1 != a2)
		return a1 < a2;
	else if(b1 != b2)
		return b1 < b2;
	else
		return c1 < c2;
}

void init()
{
	ans1.in_hour = 24;
	ans1.in_minute = ans1.in_second = 60;
	ans2.out_hour = ans2.out_minute = ans2.out_second = 0;
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
		scanf("%s %d:%d:%d %d:%d:%d", temp.id, &temp.in_hour, &temp.in_minute, &temp.in_second, &temp.out_hour, &temp.out_minute, &temp.out_second);
		if(temp.in_hour, temp.in_minute, temp.in_second, temp.out_hour, temp.out_minute, temp.out_second)
		{
			if(temp.in_hour, temp.in_minute, temp.in_second, ans1.in_hour, ans1.in_minute, ans1.in_second)
				ans1 = temp;
			if(ans2.out_hour, ans2.out_minute, ans2.out_second, temp.out_hour, temp.out_minute, temp.out_second)
				ans2 = temp;
		}
	}
	printf("%s %s\n", ans1.id, ans2.id);
	return 0;
}
