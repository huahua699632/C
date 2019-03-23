#include <cstdio>
typedef long long LL;
using namespace std;

LL a, b, c;
LL ans;

LL max(LL x, LL y)
{
	if(x >= y)
		return x;
	else
		return y;
}

int main()
{
	scanf("%lld%lld%lld", &a, &b, &c);
	ans = max(a, b);
	ans = max(ans, c);
	printf("%lld\n", ans);
}
