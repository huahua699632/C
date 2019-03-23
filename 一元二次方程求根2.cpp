#include <cstdio>
#include <math.h> 
using namespace std;

double a, b, c;
double r1, r2;

int main()
{
	scanf("%lf%lf%lf", &a, &b, &c);
	if(a)
	{
		if((b * b - 4 * a * c) >= 0)
		{
			r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
			printf("r1=%7.2f\nr2=%7.2f\n", r1, r2);
		}
		else
		{
			printf("No real roots!\n");
		}
	}
}
