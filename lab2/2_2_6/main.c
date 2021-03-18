#include <stdio.h>
#include <math.h>
#include "main.h"


int main() {
	double s, e;
	double x, res;
	int n, n1;
    n = 1;
	scanf("%lf", &x);
	scanf("%lf",&e);
	s = sin(x);
	printf("%lf\n", s);
	n = count(x, e,n);
	printf("\n%d",n);
	n = 1;
	n = countNew(x, e, n);
	printf("\n%d", n);
	return 0;	
}

double countSecond(double x, int n) {
	double res;
	int nn;
    res=1; nn=1;
	while (nn <= n) {
		res *= (x / nn);
		nn++;
	}
	return res;
}

double count(double x,double e,int n) {
	long double res;
	int n1;
    res=0;
	while (fabs(sin(x)-res)>e) {
		double second;
        int n2;
        n2 = (n * 2)-1;
		
		second = countSecond(x, n2);
		res += (pow(-1, n - 1.0) * second);
		n++;
		
	}
	return n;
}
unsigned int factorial(int number) {
	return (number < 2) ? 1 : number * factorial(number - 1);
}

int countNew(double x, double e, int n) {
	long double res;
	int n1;
	res = 0;
	while (fabs(sin(x) - res) > e) {
		int n2;
		n2 = (n * 2) - 1;
		res += ((pow(-1, n - 1.0) * pow(x, n2)) / factorial(n2));
		n++;
	}
	return n;
}
