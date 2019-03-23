#include <cstdio>
using namespace std;

double a, b, c;
double temp_min, temp_max;

double min(double x, double y)
{
	if(x >= y)
		return y;
	else
		return x;
}

double max(double x, double y)
{
	if(x >= y)
		return x;
	else
		return y;
}

int main()
{
	scanf("%lf%lf%lf", &a, &b, &c);
	temp_min = min(a, b);
	temp_min = min(temp_min, c);
	temp_max = max(a, b);
	temp_max = max(temp_max, c);
	b = a + b + c - temp_min - temp_max;
	a = temp_min;
	c = temp_max;
	printf("%.2f %.2f %.2f\n", a, b, c);
 } 
