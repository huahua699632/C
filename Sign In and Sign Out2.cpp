#include <cstdio>
using namespace std;

struct person{
	char id[16];
	int hour, minute, sceond;
}temp, ans1, ans2;

void init()
{
	ans1.hour = 24;
	ans1.minute = ans1.sceond = 60;
	ans2.hour = ans2.minute = ans2.sceond = 0;
}

bool less(person a, person b)
{
	if(a.hour != b.hour)
		return a.hour < b.hour;
	else if(a.minute != b.minute)
		return a.minute < b.minute;
	else
		return a.sceond < b.sceond;
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
		scanf("%s %d:%d:%d", temp.id, &temp.hour, &temp.minute, &temp.sceond);
		if(less(temp, ans1))
			ans1 = temp;
		scanf(" %d:%d:%d", &temp.hour, &temp.minute, &temp.sceond);
		if(less(ans2, temp))
			ans2 = temp;
	}
	printf("%s %s\n", ans1.id, ans2.id);
}
