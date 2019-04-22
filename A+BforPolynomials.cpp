#include <cstdio>
using namespace std;
const int K = 10;
const int N = 1010;

int k;
int a;
double b;
double m[N];
int count;

int main()
{
	for(int i = 0; i < 2; i++)
	{
		scanf("%d", &k);
		if(k <= K)
		{
			while(k--)
			{
				scanf("%d %lf", &a, &b);
				m[a] = m[a] + b;
			}	
		}
		
	}
	for(int i = 0; i <= 1000; i++)
	{
		if(m[i] != 0)
		{
			count++;
		}		
	}
	printf("%d", count);
	for(int i = 1000; i >= 0; i--)
	{
		if(m[i] != 0)
		{
			printf(" %d %.1lf", i, m[i]);
		}		
		
	}
 } 
