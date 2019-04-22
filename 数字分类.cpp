#include <cstdio>
#include <math.h>
using namespace std;
const int N = 1000;

int n;
int m;
int a1, a2, a3, a4, a5;
int a2_count;
double a4_avg;
int a4_count;

int main()
{
	scanf("%d", &n);
	if(n <= N)
	{
		while(scanf("%d", &m) != EOF)
		{
			//满足A1的情况
			if((m % 5 == 0) && (m % 2 == 0))
			{
				 
				a1 = a1 + m;
			} 
			//满足A2的情况
			if(m % 5 == 1)
			{
			 	a2 = a2 + m * pow(-1, a2_count);
			 	a2_count++;
			}
			//满足A3的情况
			if(m % 5 == 2)
				a3++; 
			//满足A4的情况
			if(m % 5 == 3)
			{
				a4_count++;
				a4 = a4 + m;
			}
			//满足A5的情况
			if(m % 5 == 4)
			{
				if(m > a5)
					a5 = m;	
			} 
		}
	}
	a4_avg = (double)a4 / a4_count;
	if(a1 != 0)
		printf("%d ", a1);
	else
		printf("N ");
	if(a2_count != 0)
		printf("%d ", a2);
	else
		printf("N ");
	if(a3 != 0)
		printf("%d ", a3);
	else
		printf("N ");
	if(a4 != 0)
		printf("%.1lf ", a4_avg);
	else
		printf("N ");
	if(a5 != 0)
		printf("%d", a5);
	else
		printf("N");
}
