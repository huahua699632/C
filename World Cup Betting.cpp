#include <cstdio>
using namespace std;
const double eps = 1e-8;

double sum = 0.65;

double max(double a, double b)
{
	if(a - b > eps)
		return a;
	else
		return b;
}

int main()
{
	double w, t, l;
	while(scanf("%lf%lf%lf", &w, &t, &l) != EOF)
	{
		sum *= max(max(w, t), l);
		if(max(max(w, t), l) == w)
			printf("W ");
		else if(max(max(w, t), l) == t)
			printf("T ");
		else if(max(max(w, t), l) == l)
			printf("L ");
	}
	printf("%.2lf\n", (sum - 1) * 2);
	return 0;
}
