/*
 ============================================================================
 Name        : physic.c
 Author      : tomaras spyros 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// i calculate the price of a
double avalue(int n){
	double a;
	a = 1.0/(2.0 *pow(n,4) + 7.0*sqrt(n) + 3.0);
}


//i check the e until it is among 0 and 1
double inputError(){
	double e;
	do{
		printf("\nError = ");fflush(stdout); scanf("%lf", &e);
	}while(e<=0||e>1);
}


double calck(double e){
	double k=0, k1, k2;
	int n = 0;

	do{
		n++;
		k1 = pow(n,7) + sqrt(n) + 4;
		k2 = sqrt(pow(n,5)) + n + 5;
		k += k1/k2 + 2 * cos(M_PI/n);
		printf("\n n=%3d k=%lf" , n , k);
	}while(avalue(n) > e);
}

//main 
int main(void){
	puts("thema 1 of 2017-01-27");
	printf("\n k=%lf", calck(inputError()));
	return EXIT_SUCCESS;
}
