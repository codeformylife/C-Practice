#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double triangleAltitude(double a, double b, double c)
 { // Write your statements here
 	double s =0, h = 0;
	if(a+b <c || a + c <b || b +c <a) {
		return 0;
	} else {
		s = (a+b+c) /2;
		h = 2*sqrt(s*(s-a)*(s-b)*(s-c))/a;
	}
	return(h); //This statement must be changed 
  }

int main() // DO NOT EDIT THE main FUNCTION
{system("cls");
  printf("\nTEST Q4 (2 marks):\n");
  double a, b, c, s;
  printf("Enter a = "); scanf("%lf",&a);
  printf("Enter b = "); scanf("%lf",&b);
  printf("Enter c = "); scanf("%lf",&c);
  s = triangleAltitude(a,b,c);
  printf("\nAltitude = %.2f\n",s);
  printf("\nOUTPUT:\n");
  printf("%.2f\n",s); 
  printf("\n");
  system ("pause");
  return(0);
}
