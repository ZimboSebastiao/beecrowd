#include <stdio.h>
 
int main() {
	double	total;
	double	price1;
	double	price2;
	int		code2;
	int		unit2;
	int		code1;
	int		unit1;
 
	scanf("%d", &code1);
	scanf("%d", &unit1);
	scanf("%lf", &price1);

	scanf("%d", &code2);
	scanf("%d", &unit2);
	scanf("%lf", &price2);

	total = (price1 * unit1) + (price2 * unit2);
	
	printf("VALOR A PAGAR: R$ %.2lf\n", total);


    return 0;
}