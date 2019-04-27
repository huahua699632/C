//超时
#include <cstdio>
using namespace std;
const int maxN = 100;

int a[maxN];

int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		int m;
		scanf("%d", &m);
		if(m <= n)
		{
			while(m--)
			{
				int x;
				scanf("%d", &x);
				for(int i = 0; i <= n; i++)
				{
					if(i == n)
					{
						printf("NO\n");
						break;
					}
					else
					{
						if(a[i] == x)
						{
							printf("YES\n");
							break;
						}
					}
					
				}
			}
		}
		
	}
}
