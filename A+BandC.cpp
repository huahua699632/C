#include <cstdio>
using namespace std;
const int T = 10; 

long long a, b, c, ans;
int t;
int count;

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		count++;
		scanf("%lld %lld %lld", &a, &b, &c);
		ans = a + b;
		if((a > 0) && (b > 0) && (ans < 0))
			printf("Case #%d: true\n", count);
		else if((a < 0) && (b < 0) && (ans >= 0))
			printf("Case #%d: false\n", count);
		else if(ans > c)
			printf("Case #%d: true\n", count);
		else
			printf("Case #%d: false\n", count);
	}
}
