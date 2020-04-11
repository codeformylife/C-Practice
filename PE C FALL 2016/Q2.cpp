#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int getDouble(char string[]){
	int k=1;
	double number;
	char c;
	
	do{
		if(k==0){
			printf("Re-Enter:\n");
		}
		printf(string);
		k = scanf("%lf%c",&number,&c);
		if(k!=2 || c!='\n'){
			k=0;
			fflush(stdin);
			continue;
		}
		return number;
	} while(1);
	
}

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

double giaThua(int n){
	double s = 1;
	for(int i=1; i<=n; i++){
		s*=i;
	}
	return s;
}
double luyThua(double a, int b){
	double number = a;
	for(int i=0; i<b; i++){
		number*=a;
	}
	return number;
}
double fen(double x, int n){
	double s = 1;
	
	for(int i=1; i<=n; i++){
		s += luyThua(x,2*(i+1))/giaThua(2*i+1);
	}
	return s;
		
}

int findMin(int a, int n){
	int min = a[0];
	for(int i=1; i<n; i++){
		if(a[i]<min){
			min = a[i];
		}
	}
	return min;
}
void foo(int a[], int n){
	int min  = findMin(a,n);
	for(int i=0; i<n; i++){
		if(a[i]==min){
			a[i]=-99;
		}
	}
}


main(){
	
	double s ;
	double x;
	int n;
	printf("Case 1:\n");
	x = getDouble("Enter x: ");
	n = getInt("Enter n: ", 0,INT_MAX);
	s = fen(x,n);
	
	printf("Case 2:\n");
	
	int a[100];
	int size  =getInt("Enter size of array: ", 1, INT_MAX);
	
	for(int i=0; i<n; i++){
		a[i] = getInt("Element: ", INT_MIN, INT_MAX);
	}
	
	foo(a,n);
	
	
	
	
	
	
	
	
}
