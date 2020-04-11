#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int callCharge(int sh, int sm, int eh, int em)
 { // Write your statements here

 
   // return(-1); //This statement must be changed 
  }

int main() // DO NOT EDIT THE main FUNCTION
{system("cls");
  printf("\nTEST Q4 (2 marks):\n");
  int sh, sm, eh, em, s;
  printf("Enter start hour = "); scanf("%d",&sh);
  printf("Enter start minute = "); scanf("%d",&sm);
  printf("Enter ending hour = "); scanf("%d",&eh);
  printf("Enter ending minute = "); scanf("%d",&em);
  s = callCharge(sh,sm,eh,em);
  printf("\nCalling charge = %d\n",s);
  printf("\nOUTPUT:\n");
  printf("%d\n",s); 
  printf("\n");
  system ("pause");
  return(0);
}
