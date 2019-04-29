#include <cstdio>
using namespace std;

int main()
{
	int m, h;
	int p;
	scanf("%d", &m);
	while(m--)
	{
		scanf("%d", &h);
		p = h + 2 * (h - 1);
		for(int i = 0; i < h; i++)
		{
			for(int j = 0; j < p; j++)
			{
				if(j >= h - 1 - i && j <= p - h + i)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
 } 
