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
void toProper(char s[])
 {
	for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') //ki tu hoa cach ki tu thuong 32 ki tu
            s[i] += 32;
    }
    for (int i = 0; i < strlen(s); i++) {
        if (i == 0 || s[i - 1] == ' ') {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 32;
        }
    }
 }

int main()
{ system("cls");
  printf("\nTEST Q3 (2 marks):\n");
  char s[100]; 
  char x[30]; char c;
  input(s);
  printf("\nThe original string:\n"); 
  display(s);
  printf("The string after processing:\n");
  toProper(s);
  display(s);
  //====THE CONTENT AFTER THE WORD "OUTPUT" WILL BE USED TO MARK YOUR PROGRAM====
  printf("\nOUTPUT:\n");
  display(s);
  printf("\n");
  system ("pause");
  return(0);
}
