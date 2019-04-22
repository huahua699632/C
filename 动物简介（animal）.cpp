#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int MaxN = 3030;
const int MaxM = 260;

int next[MaxN];

void getNext(char s[], int len)
{
	int j = -1;
	next[0] = -1;
	for(int i = 1; i < len; i++)
	{
		while(j != -1 && s[i] != s[j + 1])
		{
			j = next[j];
		 } 
		if(s[i] == s[j + 1])
			j++;
		next[i] = j;
	}
}

int KMP(char text[], char pattern[])
{
	int count = 0;
	int j = -1;
	int n = strlen(text);
	int m = strlen(pattern);
	getNext(pattern, m);
	for(int i = 0; i < n; i++)
	{
		while(j != -1 && text[i] != pattern[j + 1])
		{
			j = next[j];
		}
		if(text[i] == pattern[j + 1])
			j++;
		if(j == m - 1)
		{
			count++;
			j = next[j];
		}
	}
	return count;
}

int main()
{
	int ans = 0;
	char str1[MaxM], str2[MaxM];
	
	int n;
	scanf("%d", &n);
	getchar();
	gets(str1);
	getNext(str1, strlen(str1));
	while(n--)
	{
		gets(str2);
		ans += KMP(str2, str1);
		
	}
	printf("%d\n", ans);
}
