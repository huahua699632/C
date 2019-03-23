#include <cstdio>
using namespace std;

const int N = 50;
int a[N];
int n;

int main()
{
	scanf("%d", &n);
	a[0] = 1;
	a[1] = 1;
	for(int i = 2; i < n; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	printf("%d\n", a[n - 1]);
}
