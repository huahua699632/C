#include <cstdio>
using namespace std;

int main()
{
	int h;
	char str[1010][1010];
	while(scanf("%d", &h) != EOF)
	{
	if(h >= 1 && h <= 1000)
	{
		int n = h + 2 * (h - 1);
		for(int i = 0; i < h; i++)
			for(int j = 0; j < n; j++)
				str[i][j] = ' ';
		for(int i = 0; i < h; i++)
		{
			for(int j = n - h - 2 * i; j < n; j++)
			{
				str[i][j] = '*';
			}
		}
		for(int i = 0; i < h; i++)
		{
			for(int j = 0; j < n; j++)
				printf("%c", str[i][j]);
				printf("\n");
		}
	}
}
 } 
