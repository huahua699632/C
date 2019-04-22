#include <stdio.h>
#include <math.h>
typedef long long ll;
using namespace std;

int Da, Db;
ll A, B;
ll A_count, B_count;
ll A_sum, B_sum;

int main()
{
	scanf("%lld %d %lld %d", &A, &Da, &B, &Db);
	for(int i = 1, m = 0; m < A; i++)
	{
		int temp = 0;
		m = pow(10, i);
		temp = A % m;
		if((temp / (m / 10)) == Da)
			A_count++;
	}
	for(int i = 1, m = 0; m < B; i++)
	{
		int temp = 0;
		m = pow(10, i);
		temp = B % m;
		if((temp / (m / 10)) == Db)
			B_count++;
	}
	for(int i = 0; i < A_count; i++)
	{
		A_sum = A_sum + Da * pow(10, i);
	}
	for(int i = 0; i < B_count; i++)
	{
		B_sum = B_sum + Db * pow(10, i);
	}
	printf("%lld\n", A_sum + B_sum);
}
