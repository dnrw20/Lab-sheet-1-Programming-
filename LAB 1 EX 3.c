#include <stdio.h>
int main ()
{
int number; // defining integers for the function later
int divisor;


    printf("What is your numbers?\n"); // asking for the input
    scanf("%d %d", &number, &divisor);  //using scanf function to recognize the input from the keyboard

    do {                                //using iteration to calculate remainder after division of one number by another
        number = number-divisor;   // using simple math calculation instead of the % operator which gives the remainder from the division as well
        printf("The remainder is %.2d\n ", number); // printing the final answer- the remainder after division of one number by another
    }

        while(number >= divisor); // using iteration do -> while loop

        return 0;
        }




