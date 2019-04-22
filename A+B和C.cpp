#include <cstdio>
typedef long long ll;
using namespace std;

int T;
int id;

int main()
{
	scanf("%d", &T);
	while(T--)
	{
		id++;
		ll a = 0;
		ll b = 0;
		ll c = 0;
		scanf("%lld %lld %lld", &a, &b, &c);
		if(a + b > c)
			printf("Case #%d: true\n", id);
		else
			printf("Case #%d: false\n", id);
	}
}
