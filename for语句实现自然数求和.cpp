#include <cstdio>
using namespace std;

int sum;
int n = 100;

int main()
{
	for(int i = 0; i <= n; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
 } 
