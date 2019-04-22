#include <stdio.h>
using namespace std;

int n;
int m;

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		int sum = 0;
		scanf("%d", &m);
		for(int i = 0; i < m; i++)
		{
			int a = 0;
			scanf("%d", &a);
			sum = sum + a;
		}
		printf("%d\n\n", sum);
	}
}
