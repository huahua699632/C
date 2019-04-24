#include <cstdio>
using namespace std;
const int N = 1000;

int n;

int main()
{
	while(scanf("%d", &n) != EOF)
	{
		if(n == 0)
		{
			continue;
		}
		if(n <= N)
		{
			int count = 0;
			int a[N] = {};
			for(int i = 0 ; i < n; i++)
			{
				scanf("%d", &a[i]);
			}
			int m;
			scanf("%d", &m);
			if(m >=0 && m <= 100)
			{
				for(int i = 0; i < n; i++)
				{
					if(a[i] == m)
						count++;
				}	
			}
			
			printf("%d\n", count);
		}
	}
} 
