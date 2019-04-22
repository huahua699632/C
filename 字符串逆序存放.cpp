#include <stdio.h>
#include <string.h>
using namespace std;
const int N = 10000;

char str[N];

int main()
{
	gets(str);
	for(int i = 0; i < strlen(str) / 2; i++)
	{
		char temp = str[i];
		str[i] = str[strlen(str) - i - 1];
		str[strlen(str) - i - 1] = temp;
	}
	puts(str);
}
