#include <cstdio>
using namespace std;
const int N = 100010;
const int M = 10010;

int n;
int dis[N];
int m;
int sum;


int main()
{
	scanf("%d", &n);
	if(n <= N)
	{
		for(int i = 1; i <= n; i++)
		{
			scanf("%d", &dis[i]);
			sum += dis[i];
		}
		scanf("%d", &m);
		if(m <= M)
		{
			while(m--)
			{
				int distance1 = 0;
				int distance2 = 0;
				int a, b;
				scanf("%d%d", &a, &b);
				if(a > b)
				{
					int temp = a;
					a = b;
					b = temp;
				}
//				printf("a:%d b:%d\n", a, b);
				for(int i = a; i < b; i++)
					distance1 += dis[i];
				distance2 = sum - distance1;
//				printf("distance1:%d distance2:%d\n", distance1, distance2);
				if(distance1 < distance2)
					printf("%d\n", distance1);
				else
					printf("%d\n", distance2);
			}
		}
		
	}
}
