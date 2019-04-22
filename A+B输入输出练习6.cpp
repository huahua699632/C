#include <stdio.h>
using namespace std;

int n;

int main()
{
	while(scanf("%d", &n) != EOF)
	{
		int sum = 0;
		for(int i = 0; i < n; i++)
		{
			int a = 0;
			scanf("%d", &a);
			sum = sum + a;
		}
		printf("%d\n", sum);
	}
}
