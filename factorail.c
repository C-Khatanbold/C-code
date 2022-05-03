#include <stdio.h> 
unsigned int factorial(unsigned int a);
int main() { 
	unsigned int f, x; 
	puts("Enter an integer value between 1 and 8: "); 
	scanf("%d", &x); 
	f = factorial(x);
	printf("%u factorial equals %u\n", x, f); 
	return 0;
} 
unsigned int factorial(unsigned int a) { 
	if (a == 1) return 1; 
	else { 
		a *= factorial(a-1);
		return a; 
	} 
} 

