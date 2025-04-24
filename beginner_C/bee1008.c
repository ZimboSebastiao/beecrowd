#include <stdio.h>
 
int main() {
	int	number;
	int	salary;
	double	hours;
	double	total_month;

	scanf("%d", &number);
	scanf("%d", &salary);
	scanf("%lf", &hours);

	total_month = salary * hours;

	printf("NUMBER = %d\n", number);
	printf("SALARY = U$ %.2lf\n", total_month);

    return (0);
}