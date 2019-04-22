#include <stdio.h>
using namespace std;

int a, b;

void print(int* m, int* n)
{
	if(*m > *n)
		printf("%d %d", *m, *n);
	else
		printf("%d %d", *n, *m);
}

int main()
{
	int *p1 = &a, *p2 = &b;
	scanf("%d %d", p1, p2);
	
	print(p1, p2);
	
}
