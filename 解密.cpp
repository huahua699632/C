#include <cstdio>
#include <string.h>
using namespace std;
const int N = 1000;

char a[26], b[26]; 
char c[N];

int main()
{
	a[0] = 'A';
	b[0] = 'a';
	for(int i = 1; i < 26; i++)
	{
		a[i] = a[i - 1] + 1;
	}
	for(int i = 1; i < 26; i++)
	{
		b[i] = b[i - 1] + 1;
	}
	gets(c);
	for(int i = 0; i < strlen(c); i++)
	{
		for(int j = 0; j < 26; j++)
		{
			if(c[i] == a[j])
			{
				c[i] = a[26 - j - 1];
				break;
			}
			else if(c[i] == b[j])
			{
				c[i] = b[26 - j - 1];
				break;
			}
				
		}
	}
	puts(c);
}
