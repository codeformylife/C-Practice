#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double triangleArea(double a, double b, double c)
 { // Write your statements here
 	double s =0;
	if(a + b <c || a + c < b || b + c < a) {
		return 0;
	} else {
		double p = (a+b+c)/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
	}
   return(s); //This statement must be changed 
  }

int main() // DO NOT EDIT THE main FUNCTION
{system("cls");
  printf("\nTEST Q4 (2 marks):\n");
  double a, b, c, s;
  printf("Enter a = "); scanf("%lf",&a);
  printf("Enter b = "); scanf("%lf",&b);
  printf("Enter c = "); scanf("%lf",&c);
  s = triangleArea(a,b,c);
  printf("Area = %.2f\n",s);
  printf("\nOUTPUT:\n");
  printf("%.2f\n",s); 
  printf("\n");
  system ("pause");
  return(0);
}
