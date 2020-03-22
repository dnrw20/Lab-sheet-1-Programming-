#include <stdio.h>
#include <curses.h>

int main()
{
    int i =0, j = 0, k = 0, sumOfSquares = 0, squaresOfSum = 0;

    float difference = 0.0;

    // Calculate the sum of squares of first 100 natural numbers.
    for (i=1; i<=100 ; i++)
    {
        sumOfSquares += i*i;
    }

    // Calculate the sum of first 100 natural numbers.
    for(j=1; j<=100 ; j++)
    {
        k+=j;
    }

    // Squares of the sum of first 100 natural numbers.
    squaresOfSum = k*k;

    // Calculate the difference.
    difference = squaresOfSum - sumOfSquares;

    printf("The difference between the sum of the squares of the first one hundred natural numbers\n"); // printing first part of the answer
    printf("and the square of the sum is %.1f\n", difference); //showing output of the calculation of the difference between sum of the squares of the first one hundered natural numbers and the square of the sum
    getchar ();
}
