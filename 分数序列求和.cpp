#include <cstdio>
using namespace std;

double a[20], b[20], c[20], sum;
int n = 20;

int main()
{
	a[0] = 2;
	a[1] = 3;
	b[0] = 1;
	b[1] = 2;
	c[0] = a[0] / b[0];
	c[1] = a[1] / b[1];
	sum = c[0] + c[1];
	for(int i = 2; i < n; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		b[i] = b[i - 1] + b[i - 2];
		c[i] = a[i] / b[i];
		sum = sum + c[i];
	}
	printf("%.6f\n", sum);
 } 
