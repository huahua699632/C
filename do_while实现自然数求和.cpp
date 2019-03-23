#include <cstdio>
using namespace std;

int sum;
int n;

int main()
{
	do{
		sum = sum + n;
		n++;
	}while(n <= 100);
	printf("%d", sum);
 } 
