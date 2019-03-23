#include <cstdio>
typedef long long LL;
using namespace std;

LL sum;
LL n;

int main()
{
	scanf("%lld", &n);
	for(int i = 0; ; i++)
	{
		if(i > n)
			break;
		sum = sum + i;
	}
	printf("%lld", sum);
 } 
