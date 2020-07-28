#include <stdio.h>

int factorial(long int n);

int main()
{
	long int n;
	printf("%s\n","Input value for factorial:");
	scanf("%ld",&n);

	if (n >= 0)
        printf("Your factorial with recursion: %d\n", factorial(n));
    else
        printf("Error: n must be >= 0\n");

	return 0;
}

int factorial(long int n)
{
	if(n == 1 || n == 0) return 1;
	return n*factorial(n-1);
}