#include <cstdio>
using namespace std;

int main()
{
	int n;
	char str[200][100];
	scanf("%d", &n);
	if(n >= 1 && n <= 50)
	{
		int p = 2 * n - 1 + 2 * (n - 1);
		int q = 2 * n - 1;
		for(int i = 0; i < p; i++)
			for(int j = 0; j < q; j++)
				str[i][j] = ' ';
//		printf("p:%d\nq:%d\n", p, q);
		for(int i = 0; i < p; i++)
		{
//			printf("i:%d    ", i);
			if(i < q - 1 && i % 2 == 0)
			{
				if((i / 2) % 2 == 1)
				{
					for(int j = 0; j <= q - 1 - i / 2; j++)
					{
						if(j >= i / 2 && j % 2 == 1)
							str[i][j] = '*';
					}
				}
				else
				{
					for(int j = 0; j <= q - 1 - i / 2; j++)
					{
						if(j >= i / 2 && j % 2 == 0)
							str[i][j] = '*';
					}
				}
			}
			else if(i == q - 1)
			{
				str[i][n - 1] = '*';
			}
			else if(i > q - 1 && i % 2 == 0)
			{
				if((i / 2) % 2 == 1)
				{
					for(int j = 0; j <= i / 2 ; j++)
					{
						if(j >= q - 1 - i / 2 && j % 2 == 1)
							str[i][j] = '*';
					}
				}
				else
				{
					for(int j = 0; j <= i / 2 ; j++)
					{
						if(j >= q - 1 - i / 2 && j % 2 == 0)
							str[i][j] = '*';
					}
				}
			}
		}
		for(int i = 0; i < p; i++)
		{
			for(int j = 0; j < q; j++)
			{
				printf("%c", str[i][j]);
			}
			printf("\n");
		}
	}
}


