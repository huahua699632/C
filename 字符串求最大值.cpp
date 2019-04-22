#include <stdio.h>
#include <string.h>
using namespace std;
const int N = 10000;

char str1[N];
char str2[N];
char str3[N];
char temp[N];
char str_max[N];

int main()
{
	gets(str1);
	gets(str2);
	gets(str3);
	if(strcmp(str1, str2) >= 0)
	{
		for(int i = 0; i < strlen(str1); i++)
			temp[i] = str1[i];
	}
	else
	{
		for(int i = 0; i < strlen(str2); i++)
			temp[i] = str2[i];
	}
	if(strcmp(temp, str3) >= 0)
	{
		for(int i = 0; i < strlen(temp); i++)
			str_max[i] = temp[i];
	}
	else
	{
		for(int i = 0; i < strlen(str3); i++)
			str_max[i] = str3[i];
	}
	puts(str_max);
}
