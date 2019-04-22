#include <stdio.h>
using namespace std;
const int N = 100010;

unsigned int n;
int id[N];
int grade[N];
int sum_grade[N];
int max_id;
int max_sum;

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &id[i], &grade[i]);
		sum_grade[id[i]] = sum_grade[id[i]] + grade[i];
	}
	for(int i = 1; i <= n; i++)
	{
		if(sum_grade[i] > max_sum)
		{
			max_id = i;
			max_sum = sum_grade[i];
		}
	}
	printf("%d %d\n", max_id, max_sum);
	
}
