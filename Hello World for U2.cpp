//Ö±½ÓÊä³ö 
#include <cstdio>
#include <cstring> 
using namespace std;

char str[100];

int main()
{
	scanf("%s", str);
	int n = strlen(str);
	int n1 = (n + 2) / 3;
	int n2 = n + 2 - n1 * 2;
	for(int i = 0; i < n1 - 1; i++)
	{
		printf("%c", str[i]);
		for(int j = 1; j < n2 - 1; j++)
			printf(" ");
		printf("%c", str[n - 1 - i]);
		printf("\n");
	}
	for(int i = n1 - 1; i <= n1 + n2 - 2; i++)
		printf("%c", str[i]);
}
