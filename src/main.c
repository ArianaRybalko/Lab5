#include <stdio.h>
#include <math.h>

#define CTEST_MAIN

// uncomment lines below to enable/disable features. See README.md for details
#define CTEST_SEGFAULT
//#define CTEST_NO_COLORS
//#define CTEST_COLOR_OK

#include "thirdparty/ctest.h"

int main(int argc, const char *argv[])
{
    int result = ctest_main(argc, argv);

    printf("\n @@@@@ \n");
    return result;
}

int kvadrat(int a, int b, int c, int *x1, int *x2);
  
/*int main() 
{
   
	int a, b, c;
	int d, x1, x2, y;
   
	printf("a*x*x+b*x+c=0. Enter a,b,c: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("a=%d , b=%d ,c=%d \n", a, b, c);
	y = kvadrat(a, b, c, &x1, &x2);
	printf("y=%d\n", y);
	printf("x1=%d,x2=%d \n", x1, x2);
}*/

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

