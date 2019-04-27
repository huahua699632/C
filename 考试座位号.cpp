#include <cstdio>
using namespace std;
const int N = 1000;

struct Student{
	unsigned long long exam_no;
	int seat_no;
}student[N]; 

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		unsigned long long a, b, c;
		scanf("%lld%d%d", &a, &b, &c);
		student[b].exam_no = a;
		student[b].seat_no = c;
	}
	int m;
	scanf("%d", &m);
	while(m--)
	{
		int b;
		scanf("%d", &b);
		printf("%lld %d\n", student[b].exam_no, student[b].seat_no);
	}
	return 0;
}
