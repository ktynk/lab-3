#include<stdio.h> 
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, v, x;
	double z, i;
	printf("введите начальное население:");
	scanf_s("%lf", &i);
	printf("введите натурала n:");
	scanf_s("%d", &n);
	i += 1. / n;
	z = 3 * i;
	x = 0;
	while (i<z) {
		i += 1. / n;
		x++;
		
	}
	printf("лет стоко:%d", x);
	return 0;
}