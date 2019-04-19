#include <stdio.h>
#include <conio.h>
int main() {
	int n , r, ncr( int , int);
	long double fact( int);
	printf(" Enter value of n & r \n");
	scanf("%d %d",&n , &r);
	if( n>= r) {
		printf( " %dC%d is %d\n", n,r,ncr( n , r));

	} else {
		printf("WRONG INPUT?? enter the correct input");
	}
}
long double fact( int c) {
	long double facts = 1;
	int i;
	for ( i = 1; i<= c; i++)
	  facts = facts * i;
	return( facts);
}
int ncr ( int n, int r) {
	return( fact( n) / (fact( r) * fact(n- r) ) ) ;
}

