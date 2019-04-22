#include <cstdio>
using namespace std;
const int L = 10010;
const int M = 100;

int l, m;

int main()
{
	while(scanf("%d%d", &l, &m) != EOF)
	{
		bool a[L] = {false};
		int sum = 0;
		if(l == 0 && m == 0)
			continue;
		for(int i = 0; i < m; i++)
		{
			int x, y;
			scanf("%d%d", &x, &y);
			for(int j = x; j <= y; j++)
				a[j] = true; 
		}
		for(int i = 0; i <= l; i++)
		{
			if(a[i] == true)
				sum++;
		}
		printf("%d\n", l + 1 - sum);
	}
}
