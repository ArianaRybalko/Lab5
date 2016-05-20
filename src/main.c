#include <stdio.h>
#include <math.h>



int kvadrat(int a, int b, int c, int *x1, int *x2);
  
int main() 
{
   
	int a, b, c;
	int d, x1, x2, y;
   
	printf("a*x*x+b*x+c=0. Enter a,b,c: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("a=%d , b=%d ,c=%d \n", a, b, c);
	y = kvadrat(a, b, c, &x1, &x2);
	printf("y=%d\n", y);
	printf("x1=%d,x2=%d \n", x1, x2);
}



