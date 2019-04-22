#include <stdio.h>
#include <string.h>
using namespace std;
const int N = 10000;

int i, j, k;
char str1[N];
char str2[N];

int main()
{
	gets(str1);
	gets(str2);
	for(i = 0, j = 0; i < strlen(str1) && j < strlen(str2); i++, j++)
	{
		if(str1[i] == str2[j])
			continue;
		else
			{
				k = str1[i] - str2[j];
				break;
			}
		
	}
			
	printf("%d\n", k);
	return 0;
}
