#include <stdio.h>

int	main()
{
	double n;
	double r;
	double a;

	scanf("%lf", &r);

	n = 3.14159;
	a = n * (r * r);
	printf("A=%.4lf\n", a);
	return (0);
}