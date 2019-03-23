#include <cstdio>
#include <math.h>
using namespace std;

double PI, temp, ans;

int main()
{
	for(double i = 1; ; i++)
	{
		temp = pow(-1, i + 1) * (1 / (2 * i - 1));
		if(fabs(temp) >= 0.000001)
			ans = ans + temp;
		else
			break;
	}
	PI = 4 * ans;
	printf("PI=%10.8f\n", PI); 
}
