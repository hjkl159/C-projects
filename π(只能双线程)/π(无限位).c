#include <stdio.h>
#include <math.h>

long double f(long double x)
{
	long double aa = (1 - pow(x, 2.0));
	long double ab = pow(aa, 0.5);
	// printf("ab=%f ", ab);
	return ab;
}
int main()
{
	// aa为积分面积的高
	long double aa = 0.0, width = 0.0000000001;
	for (long double i = 0.0; i <= 1; i += width)
	{
		// long double a1 = f(i);
		// printf("%f ", a1);
		aa += f(i);
	}
	// S0 = π
	long double S0 = 4 * aa * width;
	printf("%.100f\n", S0);

	getchar();
	return 0;
}