#include <cstdio>
using namespace std;

int a[5] = {1, 2, 3, 4, 5};

int main()
{
	for(int i = 0; i < 20 ; i++)
	{
		printf("%3d", (i / 5 + 1) * a[i % 5]);
		if(!((i + 1) % 5))
			printf("\n");
	}
	printf("\n");
}
