#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//remove redundant spaces in a string s
void removeRedSpaces(char s[])
 {int n,low, up, i, j; char x[100];
  n = strlen(s);
  i=0; j=n-1;
  while(i<n && s[i]==' ') i++;
  low = i;
  while(j>0 && s[j]==' ') j--;
  up = j;
  if(low>up) {strcpy(s,""); return;}
  strcpy(x,"");
  i = low; j=0;
  while(i<=up)
   {while(i<up && s[i]==' ') i++;
    while(i<=up && s[i]!=' ') x[j++] = s[i++];
    if(i<=up) x[j++] = ' ';
   }
  x[j] = '\0';
  strcpy(s,x);
 }

//Enter data for a string s
void input(char s[])
 {printf("Enter a string s = ");
  fflush(stdin);
  gets(s);
  removeRedSpaces(s);
 }

//Display a string s
void display(char s[])
 {printf("%s\n",s);
 }

int countWordsUpper(char s[])
 {	
 	int count = 0;
	int i, n =strlen(s);
	for(i = 0; i < n; i++) {
		if(s[i] >= 'A' && s[i] <= 'Z')
			count++;
	}
   return(count); // This statement should be changed  
 }
int main()
{ system("cls");
  printf("\nTEST Q2 (2 marks):\n");
  char s[100]; 
  char x[30]; char c;
  input(s);
  printf("\nThe original string:\n"); 
  display(s);
  int k = countWordsUpper(s);
  printf("The number of words starting with uppercase letter = %d\n",k);
  //====THE CONTENT AFTER THE WORD "OUTPUT" WILL BE USED TO MARK YOUR PROGRAM====
  printf("\nOUTPUT:\n");
  printf("%d\n",k);
  printf("\n");
  system ("pause");
  return(0);
}
