#include <stdio.h>
 
int main() {
	int	a;
	int	b;
	int	c;
	int	d;
	int	dif;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	
	dif = (a * b) - (c * d);

	printf("DIFERENCA = %d\n", dif);
    return (0);
}