#include <cstdio>
using namespace std;
const int N = 100;

int n;
int a_count;
int b_count;

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		int a_win = 0;
		int b_win = 0;
		int a1 = 0;
		int a2 = 0;
		int b1 = 0;
		int b2 = 0;
		scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
		if(a2 == (a1 + b1))
			a_win = 1;
		if(b2 == (a1 + b1))
			b_win = 1;
		if(a_win > b_win)
			b_count++;
		if(b_win > a_win)
			a_count++;
	}
	printf("%d %d\n", a_count, b_count);
}
