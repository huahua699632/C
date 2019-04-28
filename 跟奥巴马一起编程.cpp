#include <cstdio>
using namespace std;

int main()
{
	int n;
	char c;
	scanf("%d %c", &n, &c);
	int m = (n + 1) / 2;
	if(n >= 3 && n <= 20)
	{
		for(int i = 0; i < m; i++)
		{
			if(i == 0 || i == m - 1)
			{
				for(int j = 0; j < n; j++)
					printf("%c", c);
				
			}
			else
			{
				for(int j = 0; j < n; j++)
				{
					if(j == 0 || j == n - 1)
						printf("%c", c);
					else
						printf(" ");
				}
			}
			printf("\n");
		}
	} 
	return 0;
}
