#include <cstdio>
using namespace std;
const int N = 210;

int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		int a[N];
		int m;
		int x = -1;
		if(n == 0)
			return 0;
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		scanf("%d", &m);
		for(int i = 0; i < n; i++)
		{
			if(a[i] == m)
			{
				x = i;
				
			}
				
		}
		printf("%d\n", x);
	}
	
}
