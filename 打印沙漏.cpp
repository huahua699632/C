#include <cstdio>
using namespace std;
const int maxN = 1000;

int n;
char c;
int ans, count;
int sum;

int main()
{
	scanf("%d", &n);
	getchar();
	scanf("%c", &c);
	if(n <= maxN)
	{
		int temp = 0;
		for(int i = 1;; i++)
		{
			if(i == 1)
			{
				temp += 1;
				if(temp <= n)
				{
					sum = temp;
					count += 1;
				}
				else
					break;	
			}	
			else
			{
				temp = temp + 2 * ( 2 * i - 1);
				if(temp <= n)
				{
					sum = temp;
					count += 2;
				}
				else
					break;
			}
			
//			printf("sum:%d\n", sum);
		}
		ans = n - sum;
		
		for(int i = 0; i < count; i++)
		{
			if(i <= count / 2)
			{
//				printf("i:%d\n", i);
				for(int j = 0; j < count; j++)
				{
					if(j >= i && j < count - i)
						printf("%c", c);
					else if(j < i)
						printf(" ");
					if((j + 1) == count)
						printf("\n");
				}
			}
			else
			{
//				printf("i:%d\n", i);
				for(int j = 0; j < count; j++)
				{
					if(j >= (count -1 - i) && j < i + 1)
						printf("%c", c);
					else if(j < i)
						printf(" ");
					if((j + 1) == count)
						printf("\n");
				}
			}
		}
		printf("%d\n", ans);
	}
}
