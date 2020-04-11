#include <stdio.h>
#include <stdlib.h>

int main()
{system("cls");
 printf("\nTEST Q2 (2 marks):\n");
  int n;double s;
  printf("Enter n = "); scanf("%d",&n);
  //============================================================
  // Write your statements here
	if(n %2 == 0) {
		s =1;
		for(int i = 3; i <= n-1; i+=2) {
			s+= 1.0/i;
		}
	}
	else{
		s =1;
		for(int i= 3; i <= n; i+=2) {
			s+= 1.0/i;
		}
	}

  //--------------------------------------------------------------------------------------------------------
  printf("s = %.4f\n",s); 

  //====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE====
  printf("\nOUTPUT:\n");
  printf("%.4f\n",s); 
  printf("\n");
  system ("pause");
  return(0);
}
