#include <stdio.h>
#include <math.h> 
using namespace std;
const double eps = 1e-8;
#define Equ(a, b) ((fabs((a) - (b))) < (eps))

int main()
{
	double a = 1.23;
	if(Equ(a, 1.23))
		printf("True!");
	else
		printf("False!");
}
