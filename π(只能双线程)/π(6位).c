#include <stdio.h>
#include <math.h>

// n!
long double m(int n)
{
	long double aa = 1.0;
	int i = 2;
	while (i <= n)
	{
		aa *= i;
		i++;
	}
	return aa;
}
// ����
long double f(int n)
{
	// n! = a1
	long double a1 = m(n);
	long double aa = pow(4.0, n) * a1 * (1103 + 26390 * n);
	long double ab = pow(a1, 4.0) * pow(396.0, 4.0 * n);
	long double ac = aa / ab;
	return ac;
}
int main()
{
	int n = 100;
	long double sigma = 0.0;
	int i = 0;
	while (i <= n)
	{
		// printf("i = %d f(i) = %.100f ", i, f(i));
		sigma += f(i);
		i++;
	}
	long double xishu = 2.0 * pow(2.0, 0.5) / 9801.0;
	long double pi = 1.0 / (sigma * xishu);
	printf("%.100f", pi);
	return 0;
}