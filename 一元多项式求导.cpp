#include <cstdio>
#include <math.h>
using namespace std;
const int N = 1000;

int a, b;

int main()
{
	while(scanf("%d %d", &a, &b) != EOF && b > 0 && fabs(a) <= N && fabs(b) <= N)
	{
		a = a * b;
		b--;
		
		if(b > 0)
		{
			printf("%d ", a);
			printf("%d ", b);
		}
		else if(b == 0)
		{
			printf("%d ", a);
			printf("%d", b);
		}
	}
}
