#include <cstdio>
typedef long long LL;
using namespace std;

LL sum;
LL n;

int main()
{
	for(int i = 0; ; i++)
	{
		sum = sum + i;
		if(sum > 1000)
		{
			n = i;
			break;
		 } 
			
		
	}
	printf("%lld", n);
 } 
