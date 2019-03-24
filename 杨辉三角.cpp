#include <cstdio>
const int N = 10;
using namespace std;

int a[N][N];
int n;

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		a[i][0] = 1;
		
	for(int i = 1; i < n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			printf("%d ", a[i][j]);
		 }
		 printf("\n"); 
	}
		 
}
