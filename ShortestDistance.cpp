#include <cstdio>
using namespace std;
const int N = 100000;
const int M = 10000;

int n, m;
int D[N + 1];
int a, b;
int sum;
int min[M];
int dis[N]; 

int MIN(int a, int b)
{
	if(a < b)
		return a;
	else
		return b;
 } 

int main()
{
	scanf("%d", &n);
	if((n <= N) && (n >= 3))
	{
		for(int i = 1; i <= n; i++)
		{
			scanf("%d", &D[i]);
			sum = sum + D[i];
			dis[i] = sum;
		}
		scanf("%d", &m);
		if(m <= M)
		{
			for(int i = 0; i < m; i++)
			{
				int temp = 0;
				scanf("%d %d", &a, &b);
//				for(int i = MIN(a, b); i < (a + b - MIN(a, b)); i++)
//					temp = temp + D[i]; //��������¿�����Ҫ���� 10e5�Σ����ֳ�ʱ���
				temp = dis[a + b - MIN(a, b) - 1] - dis[MIN(a, b) - 1];
				min[i] = MIN(temp, sum - temp);
			}
		}
	}
	for(int i = 0; i < m; i++)
		printf("%d\n", min[i]);
}
