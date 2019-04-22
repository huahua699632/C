#include <stdio.h>
using namespace std;

int a[10];

void input(int* m)
{
	for(int i = 0; i < 10; i++)
		scanf("%d", m + i);
}

void swap(int* m)
{
	int num_max = 0;
	int num_min = 99999;
	int temp1 = 0;
	int temp2 = 0;
	int k1 = 0;
	int k2 = 0;
	
	for(int i = 0; i < 10; i++)
	{
		if(*(m + i) > num_max)
		{
			num_max = *(m + i);
			k1 = i;
		}
			
	}
	temp1 = *(m + 9);
	*(m + 9) = *(m + k1);
	*(m + k1) = temp1;
	
	
	for(int i = 0; i < 10; i++)
	{
		if(*(m + i) < num_min)
		{
			num_min = *(m + i);
			k2 = i;
		}
			
	}
	temp2 = *m;
	*m = *(m + k2);
	*(m + k2) = temp2;
}

void output(int* m)
{
	for(int i = 0; i < 10; i++)
		printf("%d ", *(m + i));
	printf("\n");
}

int main()
{
	int *p = a;
	input(p);
	swap(p);
	output(p);
}
