#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int getInt(char string[], int min, int max){
	int number,k=1;
	char c;
	
	do{
		printf(string);
		k = scanf("%d%c",&number,&c);
		if(k!=2 || c!='\n' || number< min || number>max){
			printf("Wrong!\n");
			k=0;
			fflush(stdin);
			continue;
		}
		return number;
	} while(1);
	
}

void case1(int &a, int &b, int &c){
	a = getInt("Enter number a: ",INT_MIN, INT_MAX);
	b = getInt("Enter number b: ",INT_MIN, INT_MAX);
	c = getInt("Enter number c: ",3,INT_MAX);
}

void case2(int a, int b, int c){
	if(a>b && a>c){
		printf("a is the largest\n");
		return;
	}
	if(b>c && b> a){
		printf("b is the largest\n");
		return;
	}
	if(c>a && c> b){
		printf("c is the largest\n");
		return;	
	}
	printf("Not have largest number");
}
int case3(int n){
	int k = 0;
	int s = 0;
	
	while((s+2*k)<=n){
		k++;
		s+=2*k;
	}
	return k+1;
}

int case4(int n){
	int result = 0;
	while(n){
		if(n%10==0){
			result++;
		}
		n/=10;
	}
	return result;
}
main(){
	int a, b,c;
	printf("TH 1:\n\n");
	case1(a,b,c);
	
	printf("TH 2:\n\n");
	case2(a,b,c);
	
	printf("TH 3:\n\n");
	int n;
	n = getInt("Enter a number(n>2): ",3,INT_MAX);
	printf("Result: %d\n", case3(n));
	
	printf("TH 4:\n\n");
	
	n = getInt("Enter a number (n>1000): ",1000, INT_MAX);
	printf("Result: %d\n",case4(n));
}
