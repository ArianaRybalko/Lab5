#include <stdio.h>
#include <math.h>



int kvadrat(int a, int b, int c, int *x1, int *x2)
{  
	int k, d;

	if (a == 0.0) {
		k = 0;
		return 2;
	}
	d = b * b - 4 * a * c;
	if (d > 0) {
		*x1 = (-b + sqrt(d) ) / (2 * a);
		*x2 = (-b - sqrt(d) ) / (2 * a);
		k = 2;
	} 
	else 
		if (d == 0.0) {
			*x1 = (-b) / (2 * a); 
			*x2 = *x1;
			k = 1;
		} 
		else  
			k = 0;
	return (k);
}
