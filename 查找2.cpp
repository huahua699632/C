#include <cstdio>
using namespace std;
const int maxN = 105;

int n, m, a[maxN], b[maxN];

int main()
{
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		scanf("%d", &m);
		for(int i = 0; i < m; i++)
			scanf("%d", &b[i]);
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j <= n; j++)
			{
				if(j == n)
				{
					printf("NO\n");
					break;
				}	
				else 
				{
					if(a[j] == b[i])
					{
						printf("YES\n");
						break;
					}
					
				}
					
			}
			
		}
	}
	return 0;
}



