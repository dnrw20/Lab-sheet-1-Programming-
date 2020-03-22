#include <stdio.h>
#include <math.h>
#include <curses.h>

int main()
{
    int a1,a2,b1,b2; // defining integers to use later because C is the static languages ( ie Python is dynamic language and you don'n need to define integers at the beginning of the program
        int a, b, c, d;
    double difference;

    printf("Enter the first pair of elements of a set to calculate distance between coordinates:\n"); // asking to provide input to calculate distance between coordinates form the set a
    scanf("%d %d", &a1,&b1); // using scanf function to recognize input (coordinates )from the keyboard

    printf("Enter the second pair of elements of a set to calculate distance between coordinates:\n"); // asking to provide input to calculate distance between coordinates form the set b
    scanf ("%d %d", &a2,&b2);// using scanf function to recognize input (coordinates) from the keyboard

    a = a2 - a1; // calculating the difference of the coordinates in the set A
    b = b2 - b1; // calculating the difference of the coordinates in the set B
    c = a * a; // the difference between two coordinates is calculated by mathematical formula sqrt ((x2-x1)^2+(y2-y1)^2)
    d = b * b; // it is the reason why this calculations are implemented

    difference= sqrt ((c) + (d));

    printf("Distance between two points is: %.2f\n", difference); // printing the output- distance between two coordinates

        getchar();
}