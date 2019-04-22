#include <stdio.h>
#include <math.h>
using namespace std;
const double eps = 1e-8;
#define Edu(a, b) (((a) - (b)) < (-eps))
const int CLK_TCK = 100;

int c1, c2;
int hour;
int minute;
int second;
double m;

int main()
{
	scanf("%d %d", &c1, &c2);
	m = (double)(c2 -c1) / CLK_TCK;
	hour = m / 3600;
	minute = m / 60 - 60 * hour;
	if(Edu((m - (c2 -c1) / CLK_TCK), 0.5))
		second = floor(m - hour * 3600 - minute * 60);
	else
		second = ceil(m - hour * 3600 - minute * 60);
	printf("%02d:%02d:%02d\n", hour, minute, second);
}
