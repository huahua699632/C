#include <stdio.h>
#include <string.h> 
using namespace std;

char *a = "I love China!";
int n;

int main()
{
	scanf("%d", &n);
	for(int i = n; i < strlen(a); i++)
	{
		printf("%c", *(a + i));
	}
	printf("\n");
	return 0;
}
