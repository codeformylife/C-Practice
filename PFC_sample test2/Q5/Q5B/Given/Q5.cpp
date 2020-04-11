#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calCos(double x, int n)
 {// Write your statements here


   // return(-1); //This statement must be changed 
 }

int main() // DO NOT EDIT THE main FUNCTION
{system("cls");
  printf("\nTEST Q5 (2 marks):\n");
  double x, s; int n;
  printf("Enter x = "); scanf("%lf",&x);
  printf("Enter n = "); scanf("%d",&n);
  s = calCos(x,n);
  printf("cos(%.1f) = %.4f\n",x,s);
  printf("\nOUTPUT:\n");
  printf("%.4f\n",s); 
  printf("\n");
  system ("pause");
  return(0);
}
