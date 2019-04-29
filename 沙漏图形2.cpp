#include <cstdio>
using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < i; j++)
				printf(" ");
			for(int j = 0; j < n - i; j++)
			{
				printf("*");
				if(j != n - 1 - i)
					printf(" ");
			}
			printf("\n");
		} 
		for(int i = 0; i < n - 1; i++)
		{
			for(int j = 0; j < n - 2 - i; j++)
				printf(" ");
			for(int j = 0; j <= i + 1; j++)
			{
				printf("*");
				if(j != i + 1)
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0; 
} 
