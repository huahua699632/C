#include <cstdio>
using namespace std;

int a[10];
int temp;

int main()
{
	for(int i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for(int i = 0; i < 5; i++)
	{
		temp = a[i];
		a[i] = a[9 - i];
		a[9 - i] = temp;
	}
	for(int i = 0; i < 10; i++)
		printf("%d\n", a[i]);
}
