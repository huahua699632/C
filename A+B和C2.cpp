#include <cstdio>
using namespace std;
const int T = 10;
const int eps = 1e-8;

int t;

bool equ(double x, double y, double z)
{
	double m = x + y;
	if((m - z) > eps)
		return true;
	else 
		return false;
}

int main()
{
	scanf("%d", &t);
	if(t <= T)
	{
		for(int i = 1; i <= t; i++)
		{
			double a, b, c;
			scanf("%lf%lf%lf", &a, &b, &c);
			if(equ(a, b, c))
				printf("Case #%d: true\n", i);
			else
				printf("Case #%d: false\n", i);
		}
	}
}
