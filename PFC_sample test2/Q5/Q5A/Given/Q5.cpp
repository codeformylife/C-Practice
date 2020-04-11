#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double tinhGt(int n) {
	double s = 1;
	for(int i = 1; i <=n; i++) {
		s *= i;
	}
	return s;
}

double tinhMu(double x,int n) {
	double s = 1;
	for(int i = 1; i <= n; i++) {
		s *= x;
	}
	return s;
}

double calSin(double x, double c)
 {// Write your statements here
	double mu = 1, gt =1, s =1;
	int i =1, n = 2;
	while(fabs(mu/gt) > c) {
		mu = tinhMu(x,n);
		gt = tinhGt(n);
		n+=2;
		s += pow(-1.0,i)*mu/gt;
		i++;
	}
	return s;

  return(-1); //This statement must be changed 
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
