#include <stdio.h>
#include <string.h>
using namespace std;
const int N = 10000;

char str[N];
char ans[N];

void change(char string[], char answer[])
{
	int k = 0;
	for(int i = 0; i < strlen(string); i++)
	{
		if((string[i] == 'a') || (string[i] == 'e') || (string[i] == 'i') || (string[i] == 'o') || (string[i] == 'u'))
		{
			answer[k] = string[i];
			k++;
		}
	}
}

int main()
{
	gets(str);
	change(str, ans);
	puts(ans);
}

