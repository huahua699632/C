#include <cstdio>
using namespace std;
const int N = 54;
const int K = 20;

char mp[5] = {'S', 'H', 'C', 'D', 'J'};
int start[N + 1], end[N + 1], order[N + 1];
int k;

int main()
{
	scanf("%d", &k);
	if(k <= K)
	{
		for(int i = 1; i <= N; i++)
		{
			start[i] = i;
		}
		for(int i = 1; i <= N; i++)
		{
			scanf("%d", &order[i]);
		}
		while(k--)
		{
			for(int i = 1; i <= N; i++)
			{
				end[order[i]] = start[i];
			}
			for(int i = 1; i <= N; i++)
			{
				start[i] = end[i];
			}
		}
		for(int i = 1; i <= N; i++)
		{
//			if(end[i] % 13 != 0)
//				printf("%c%d", mp[(end[i] - 1) / 13], end[i] % 13);
//			else
//				printf("%c13", mp[(end[i] - 1) / 13]);
			end[i]--;
			printf("%c%d", mp[end[i] / 13], end[i] % 13 + 1);
			if(i < N)
				printf(" ");
		}
	}
}
