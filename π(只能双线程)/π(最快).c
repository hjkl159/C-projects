#include <stdio.h>
#include <math.h>

int main()
{
	long double ac = 1.0;
	int n;
	printf("输入精度n\n");
	printf("8需要4秒，9需要8的10倍\n");
	scanf_s("%d", &n);
	for (long long i = 1; i <= pow(10, n); i++)
	{
		long double aa = i;
		if (i % 2 == 1)
		{
			aa += 1;
		}
		long double ab = i;
		if (i % 2 == 0)
		{
			ab += 1;
		}
		ac *= (aa / ab);
	}
	long double pi = ac * 2;
	printf("%.100f", pi);

	getchar();
	getchar();
	return 0;
}

