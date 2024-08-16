#include <stdio.h>
#include <math.h>

int main()
{
	long double aa = 0.0;
	// long longµ½10µÄ19´Î
	for (long long i = 1; i <= pow(10, 9); i += 2)
	{
		// printf("i = %d\n", i);
		aa += 1.0 / pow(i, 2);
	}
	long double pi = pow(aa * 8, 0.5);
	printf("%.100f", pi);
	return 0;
}