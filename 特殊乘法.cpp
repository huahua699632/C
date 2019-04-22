#include <cstdio>
#include <cstring>
using namespace std;

char str1[10];
char str2[10];

int main()
{
	while(scanf("%s%s",str1, str2) != EOF)
	{
		int len1 = strlen(str1);
		int len2 = strlen(str2);
		int sum1 = 0;
		int sum2 = 0;
		for(int i = 0; i < len1; i++)
		{
			sum1 = sum1 + str1[i] - '0';
		}
		for(int i = 0; i < len2; i++)
		{
			sum2 = sum2 + str2[i] - '0';
		}
		printf("%d\n", sum1 * sum2);
	}
}
