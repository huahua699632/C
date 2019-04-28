//使用二维数组 
#include <cstdio>
#include <cstring>
using namespace std;

char str[100];
char ans[40][40];

int main()
{
	scanf("%s", str);
	int n = strlen(str);
	int n1 = (n + 2) / 3;
	int n2 = n + 2 - n1 * 2;
	for(int i = 0; i < n1; i++)
		for(int j = 0; j < n2; j++)
			ans[i][j] = ' ';
	int pos = 0;
	for(int i = 0; i < n1; i++)
	{
		ans[i][0] = str[pos++];
	}
	for(int j = 1; j < n2; j++)
	{
		ans[n1 - 1][j] = str[pos++];
	}
	for(int i = n1 - 2; i >= 0; i--)
	{
		ans[i][n2 - 1] = str[pos++];
	}
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < n2; j++)
		{
			printf("%c", ans[i][j]);
		}
		printf("\n");
	}
	return 0;	
}
