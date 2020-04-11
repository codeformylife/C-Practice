#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calSin(double x, int n)
 {// Write your statements here
	double s = x, gt = 1, mu = x;
	int i, k =1;
	for(i = 3; i < n; i+=2) {
		gt *= i*(i-1);
		mu *= x*x;
		s+= pow(-1.0,k)*mu/gt;
		k++;
	}
   return(s); //This statement must be changed 
 }

int main() // DO NOT EDIT THE main FUNCTION
{system("cls");
  printf("\nTEST Q5 (2 marks):\n");
  double x, s; int n;
  printf("Enter x = "); scanf("%lf",&x);
  printf("Enter n = "); scanf("%d",&n);
  s = calSin(x,n);
  printf("sin(%.1f) = %.4f\n",x,s);
  printf("\nOUTPUT:\n");
  printf("%.4f\n",s); 
  printf("\n");
  system ("pause");
  return(0);
}
