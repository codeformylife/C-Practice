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
void split(char s[],char arr[][31],int &n)
{
	char p[1000];
	int k=0,i;
	strcpy(p,s);
	for(i=0;i<strlen(p);i++){
		if(p[i]==' '){
			strcpy(arr[k],p);
			arr[k++][i]='\0';//arr[k][i]='\0';k++;
			strcpy(&p[0],&p[i+1]);
			i=-1;
		}
	}
	strcpy(arr[k],p);
	n=k+1;
}
void rebuild(char s[], char arr[][31],int n){
	strcpy(s,arr[0]);
	for(int i=1;i<n;i++)
	{
		strcat(s," ");
		strcat(s,arr[i]);
	}
}
char* toUpper(char s[])
{
	strlwr(s);
	int i;
	if(s[0]>=95&&s[0]<=122)
	s[0]-=32;
	for(i=1;i<strlen(s);i++)
	{
		if(s[i-1]==' '&&s[i]>=95&&s[i]<=122)
		s[i]-=32;
	}
	return s;
}
char* toLower(char s[])
{
	strupr(s);
	int i;
	if(s[0]>64&&s[0]<91)
	s[0]+=32;
	for(i=1;i<strlen(s);i++)
	{
		if(s[i-1]==' '&&s[i]>=65&&s[i]<=90)
		s[i]+=32;
	}
	return s;
}
void sortWords(char s[])
 {
 	char arr[100][31];
 	char c[100];
 	int n;
 	split(s,arr,n);
 	
 	for(int i=0;i<n-1;i++)
 	for(int j=i+1;j<n;j++)
 	if(strcmp(arr[i],arr[j])>0)
 	{
 		strcpy(c,arr[i]);
 		strcpy(arr[i],arr[j]);
 		strcpy(arr[j],c);
 	}
 	
 	rebuild(s,arr,n);
 	toLower(s);
}

int main()
{ system("cls");
  printf("\nTEST Q4 (2 marks):\n");
  char s[100]; 
  char x[30]; char c;
  input(s);
  printf("\nThe original string:\n"); 
  display(s);
  printf("The string after processing:\n");
  sortWords(s);
  display(s);
  //====THE CONTENT AFTER THE WORD "OUTPUT" WILL BE USED TO MARK YOUR PROGRAM====
  printf("\nOUTPUT:\n");
  display(s);
  printf("\n");
  system ("pause");
  return(0);
}
