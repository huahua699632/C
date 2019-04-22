#include <stdio.h>
using namespace std;

int a, b, c;

void print(int* m, int* n, int* x)
{
	int num_max, num_min;
	if((*m > *n) && (*m > *x))
		num_max = *m;
	else if((*n > *m) && (*n > *x))
		num_max = *n;
	else
		num_max = *x;
	if((*m < *n) && (*m < *x))
		num_min = *m;
	else if((*n < *m) && (*n < *x))
		num_min = *n;
	else
		num_min = *x;
	printf("%d %d %d\n", num_max, *m + *n + *x - num_max - num_min, num_min);
}

int main()
{
	int *p1 = &a, *p2 = &b, *p3 = &c;
	scanf("%d %d %d", p1, p2, p3);
	
	print(p1, p2, p3);
	
}
