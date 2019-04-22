#include <cstdio>
#include <cstring>
using namespace std;

char str1[20], str2[20], str3[20], ans[20];
int len1, len2;
long long sum;

int main()
{
	while(scanf("%s%s", str1, str2) != EOF)
	{
		long long a = 0;
		long long b = 0; 
		len1 = strlen(str1);
		len2 = strlen(str2);
		for(int i = 0; i < len1; i++)
		{
			if(str1[i] == '-')
				continue;
			if(str1[i] >= '0' && str1[i] <= '9')
			{
				a = a * 10 + str1[i] - '0';
			}
		}
		if(str1[0] == '-')
			a = -a;
		for(int i = 0; i < len2; i++)
		{
			if(str2[i] == '-')
				continue;
			if(str2[i] >= '0' && str2[i] <= '9')
			{
				b = b * 10 + str2[i] - '0';
			} 
		}
		if(str2[0] == '-')
			b = -b;
//		printf("a:%d\n", a);
//		printf("b:%d\n", b);
		sum = a + b;
		printf("%lld\n", sum);
	}
}
