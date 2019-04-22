#include <cstdio>
using namespace std;
const int N = 100;

int n, m;
int a[2 * N];
int count;

int main()
{
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	if(m == 0)
	{
		for(int i = 0; i < n; i++)
		printf("%d", a[i]);
	}
	else
	{
		m = m % n;
		for(int i = n - m; i < n; i++)
		{
			count++;
			printf("%d", a[i]);
			if(count < n)
				printf(" ");
		}
		for(int i = 0; i < n - m; i++)
		{
			count++;
			printf("%d", a[i]);
			if(count < n)
				printf(" ");
		}
	}
}
