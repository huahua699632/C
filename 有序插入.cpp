#include <cstdio>
using namespace std;

int a[10];
int m; //需要插入的数 
int temp; //数组中需要后移的第一个数的下标 

int main()
{
	for(int i = 0; i < 9; i++)
		scanf("%d", &a[i]);
	scanf("%d", &m);
	for(int i = 0; i < 9; i++)
	{
		if(a[i] > m)
		{
			temp = i;
			break;
		 } 
		
	}
	for(int i = 9; i > temp; i--)
	{
		a[i] = a[i - 1];
	 }
	 a[temp] = m;
	 for(int i = 0; i <= 9; i++)
	 	printf("%d\n", a[i]);
	printf("\n"); 
 } 
