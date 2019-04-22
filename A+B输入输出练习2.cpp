#include <stdio.h>
using namespace std;

int a, b;
int n;

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
 } 
