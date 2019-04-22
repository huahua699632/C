#include <stdio.h>
#include <string.h>
using namespace std;

char str1[20];
char str2[20];
char str3[20];
char *p1, *p2, *p3;

void swap(char* m, char* n)
{
	char temp[20];
	strcpy(temp, m);
	strcpy(m, n);
	strcpy(n, temp);
}

int main()
{
	gets(str1);
	gets(str2);
	gets(str3);
	
	p1 = str1;
	p2 = str2;
	p3 = str3;
	
	if(strcmp(str1, str2) > 0)
		swap(p1, p2);
	if(strcmp(str1, str3) > 0)
		swap(p1, p3);
	if(strcmp(str2, str3) > 0)
		swap(p2, p3);
	
	puts(str1);
	puts(str2);
	puts(str3);
	
	return 0;	
}
