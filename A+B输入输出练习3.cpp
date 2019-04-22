#include <stdio.h>
using namespace std;

int a, b;

int main()
{
	while(scanf("%d %d", &a, &b) != EOF)
	{
		if((a == 0) && (b == 0))
			break;
		printf("%d\n", a + b);
	}
}
