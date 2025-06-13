// This function calculates factorial of a number using recursion

#include<stdio.h>
int factorial (int );
int factorial(int n){
	
	if (n==1||n==0){
	return 1;
	}
	return factorial (n-1)*n;
}
int main(){
	int a;
	printf("••••CALCULATE FACTORIAL••••\n");
	printf("\n");
	printf (" enter the number: ");
	
	scanf("%d" ,&a);
	printf("factorial  is %d\n" ,factorial(a));
	return 0;
}