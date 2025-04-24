#include <stdio.h>
 
int main() {
	char	name[40];
	int		bonus;
	double	salary;
	double	product;
	double	total_month;

	bonus = 15;

	scanf("%s", name);
	scanf("%lf", &salary);
	scanf("%lf", &product);

	total_month = salary + ((product * bonus) / 100);
	printf("TOTAL = R$ %.2lf\n", total_month);
	
    return (0);
}