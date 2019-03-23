#include <cstdio>
using namespace std;

double a, b, temp;

int main()
{
	scanf("%lf%lf", &a, &b);
	if(a >= b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	printf("%.2f %.2f", a, b);
}
