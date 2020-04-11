#include <stdio.h>
#include <stdlib.h>

int main()
{system("cls");
 printf("\nTEST Q3 (2 marks):\n");
  int m,n, s;
  printf("Enter m = "); scanf("%d",&m);
  //============================================================
  // Write your statements here
	s = 0;
	n =0;
	while(s < m) {
		n++;
		s+=n;
	}
  //--------------------------------------------------------------------------------------------------------
  printf("sum = %d\n",s); 
  printf("n = %d\n",n); 

  //====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE====
  printf("\nOUTPUT:\n");
  printf("%d\n",n); 
  printf("\n");
  system ("pause");
  return(0);
}
