#include <cstdio>
using namespace std;

int sum;
int n;

int main()
{
	while(n <= 100)
	{
		sum = sum + n;
		n++;
	}
	printf("%d", sum);
 } 
