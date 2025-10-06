
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	double p, r,K;
	int i, h, Z;
	int z = 500;
	p = acos(-1.0)/4; //число пи
	h = 1;
	r = 0.0;
	for (i = 0; i < z; i++) {
		

		Z = 2 * i + 1;
		r += h * (1.0 / Z);
		h = -h;

	}

	printf("%lf\n", r);
	printf("%lf\n", p);
	K = p - r;
	printf("погрешность %.4lf\n", K);
		
	return 0;
}
