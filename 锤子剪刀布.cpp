#include <cstdio>
using namespace std;
const int N = 100000;

int a[3], b[3];
int a_win[3];//a_win[0]、a_win[1]、a_win[2]分别代表C、J、B赢的次数 
int b_win[3]; //b_win[0]、b_win[1]、b_win[2]分别代表C、J、B赢的次数
int n;
char A, B;
int a_max, b_max;

int max(int a, int b)
{
	if(a > b)
		return a;
	else
		return b;
}

int equal(int a, int b)
{
	if(a == b)
		return 1;
	else
		return 0;
}

int main()
{
	scanf("%d", &n);
	if(n <= N)
	{
		while(n--)
		{
			getchar();
			scanf("%c %c", &A, &B);
			if(A == 'C')
			{
				if(B == 'J')
				{
					a[0]++;
					a_win[0]++;
					b[2]++;
					
				}
				if(B == 'C')
				{
					a[1]++;
					b[1]++;
				}
					
				if(B == 'B')
				{
					a[2]++;
					b_win[2]++;
					b[0]++;
				}		
			}
			else if(A == 'J')
			{
				if(B == 'B')
				{
					a[0]++;
					a_win[1]++;
					b[2]++;
					
				}
				if(B == 'J')
				{
					a[1]++;
					b[1]++;
				}
					
				if(B == 'C')
				{
					a[2]++;
					b_win[0]++;
					b[0]++;
				}
				
			}
			else if(A == 'B')
			{
				if(B == 'C')
				{
					a[0]++;
					a_win[2]++;
					b[2]++;
					
				}
				if(B == 'B')
				{
					a[1]++;
					b[1]++;
				}
					
				if(B == 'J')
				{
					a[2]++;
					b_win[1]++;
					b[0]++;
				}
				
			}
		}
		printf("%d %d %d\n", a[0], a[1], a[2]);
		printf("%d %d %d\n", b[0], b[1], b[2]);
		
		a_max = max(max(a_win[0], a_win[1]), a_win[2]);
		b_max = max(max(b_win[0], b_win[1]), b_win[2]);
		if(equal(a_max, a_win[0]))
		{
			if(equal(a_win[0], a_win[2]))
				printf("B ");
			else
				printf("C ");
		}
		else if(equal(a_max, a_win[1]))
		{
			if(equal(a_win[1], a_win[2]))
				printf("B ");
			else
			{
				if(equal(a_win[0], a_win[1]))
					printf("C ");
				else
					printf("J ");
			}
		}
		else if(equal(a_max, a_win[2]))
			printf("B");
		if(equal(b_max, b_win[0]))
		{
			if(equal(b_win[0], b_win[2]))
				printf("B");
			else
				printf("C");
		}
		else if(equal(b_max, b_win[1]))
		{
			if(equal(b_win[1], b_win[2]))
				printf("B");
			else
			{
				if(equal(b_win[0], b_win[1]))
					printf("C");
				else
					printf("J");
			}
		}
		else if(equal(b_max, b_win[2]))
			printf("B");
			
		
	}
}
