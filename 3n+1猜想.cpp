#include <stdio.h>
using namespace std;

int n;
int count;

int main()
{
	scanf("%d", &n);
	while(n != 1)
	{
		if(n % 2 == 1)
		{
			n = (3 * n + 1) / 2;
			count++;
		}
		else
		{
			n = n / 2;
			count++;
		}
	}
	printf("%d\n", count);
}
