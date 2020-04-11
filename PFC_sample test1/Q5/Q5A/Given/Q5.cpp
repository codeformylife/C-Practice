#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calSin(double x, double c)
 {// Write your statements here
	double  s= x, gt =1, mu =x;
	int i = 1, n = 1;
	while(fabs(mu/gt)> c) {
		n +=2;
		mu *= x*x;
		gt *= n*(n-1);
		s += pow(-1.0,i)*mu / gt;
		i++;
	}
  return(s); //This statement must be changed 
 }

int main() // DO NOT EDIT THE main FUNCTION
{system("cls");
  printf("\nTEST Q5 (2 marks):\n");
  double x, c, s;
  printf("Enter x = "); scanf("%lf",&x);
  printf("Enter c = "); scanf("%lf",&c);
  s = calSin(x,c);
  printf("sin(%.1f) = %.4f\n",x,s);
  printf("\nOUTPUT:\n");
  printf("%.4f\n",s); 
  printf("\n");
  system ("pause");
  return(0);
}
