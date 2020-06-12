#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Will print the numbers and tell you if they are bigger than 5, smaller than 6 or equal to 0
 * Return: Always (0).
 */ 

int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    d= n%10;
    printf ("Last digit of %d is %d and is ", n, d);
    
    if (d==0){
    printf ("and is 0\n");
    } else if (d>5) {
    printf ("greater than 5\n");}
    else if (d<6){
    printf ("and is less than 6 and not 0");
    }
    
	return (0);
}
