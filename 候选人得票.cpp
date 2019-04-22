#include <stdio.h>
#include <string.h>
using namespace std;
const int N = 100;

struct person {
    char name[20];
    int count;
}leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};
char a[100][20];
int n;

int main()
{
	scanf("%d", &n);
	while(n >= 0)
	{
		gets(a[n]);
		if(strcmp(a[n], "Li") == 0)
			leader[0].count++;
		else if(strcmp(a[n], "Zhang") == 0)
			leader[1].count++;
		else if(strcmp(a[n], "Fun") == 0)
			leader[2].count++;
		n--;
	}
	for(int i = 0; i < 3; i++)
		printf("%s:%d\n", leader[i].name, leader[i].count);
}
