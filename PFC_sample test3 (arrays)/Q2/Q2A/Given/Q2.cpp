#include <stdio.h>
#include <stdlib.h>

//note: int &n means that the variable n is passed to the function, not it's copy.
void input(int a[], int &n) 
   {printf("Enter number of elements n = ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
     {printf("a[%d] = ",i);
      scanf("%d",&a[i]);
     }
    printf("Data input is completed!\n\n");
   }

void display(int a[], int n) 
   {for(int i=0;i<n;i++) printf("%d ",a[i]);
     printf("\n"); 
   }
   
int findIndex_x(int a[],int x, int n) {
	for(int i = 0; i < n; i++) {
		if(x == a[i])
			return i;
	}
	return -1;
}   
void dele(int a[], int &n, int x)
 {
	int flag = findIndex_x(a,x,n);
	if(flag >= 0) {
		for(int i =flag; i < n; i++) {
			a[i] = a[i+1];
		}
		n--;
	}
 }


int main()
{ system("cls");
  printf("\nTEST Q2 (2 marks):\n");
  int a[100]; int n, x;
  input(a,n);
  printf("Enter the value to be deleted x = "); scanf("%d",&x);
  printf("The original array:\n"); 
  display(a,n);
  dele(a,n,x);
  printf("The array after deletion:\n"); 
  display(a,n);
  //====THE CONTENT AFTER THE WORD "OUTPUT" WILL BE USED TO MARK YOUR PROGRAM====
  printf("\nOUTPUT:\n");
  display(a,n);
  printf("\n");
  system ("pause");
  return(0);
}
