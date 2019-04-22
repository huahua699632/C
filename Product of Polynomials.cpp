#include <cstdio>
#include <math.h>
using namespace std;
const double eps = 1e-8;
#define Equ(a, b) ((fabs((a) - (b))) < eps)
const int K = 10;
const int N = 2010;

int k1, k2;
int a1[K], a2[K];
double b1[K], b2[K];
double m[N];
int count;
int a1_max, a2_max;


int main()
{
	scanf("%d", &k1);
	if(k1 <= K)
	{
		for(int i = 0; i < k1; i++)
		{
			scanf("%d %lf", &a1[i], &b1[i]);
		}
	}
	scanf("%d", &k2);
	if(k2 <= K)
	{
		for(int i = 0; i < k2; i++)
		{
			scanf("%d %lf", &a2[i], &b2[i]);
		}
	}
	for(int i = 0; i < k1; i++)
		for(int j = 0; j < k2; j++)
		{
			if(!Equ(b1[i] * b2[j], 0))
				m[a1[i] + a2[j]] = m[a1[i] + a2[j]] + b1[i] * b2[j];
		}
	for(int i = 0; i <= 2000; i++)
	{
		if(m[i] != 0)
		{
			count++;
		}		
	}
	printf("%d", count);
	for(int i = 2000; i >= 0; i--)
	{
		if(m[i] != 0)
		{
			printf(" %d %.1lf", i, m[i]);
		}
	}
}
