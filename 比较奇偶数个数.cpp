#include <cstdio>
using namespace std;

int main()
{
	int n = 0;
	while(scanf("%d", &n) != EOF)
	{
		int even = 0;
		int odd = 0;
		for(int i = 0; i < n; i++)
		{
			int a;
			scanf("%d", &a);
//			printf("a:%d\n", a);
			if((a + 1) % 2 == 0)
				odd++;
			else
				even++;				
		}
//		printf("even:%d odd:%d\n", even, odd); 
		if(odd > even)
			printf("YES\n");
		else if(even > odd)
			printf("NO\n");
	}
}
