#include <stdio.h>
#include <stdlib.h>
int x; //defining integers which will be used later
int rem(int a , int b)
{
    x=a ; // using recursion if.. as stated in the conditions for this exercise
    if(x>=b) // defining condition for the loop if...- in this example we use if x>=b then x= x-b gives the remainder
    {
        x=x-b; // using simple math calculation instead of the % operator to calculate the remainder after division of one number by another
        rem(x,b);
    }
    printf("%d\n",x); // showing the output by using function printf and using \n to put the newline
    return x;
}
int main ()
{
    int a , b ;
    printf("Enter A number and B number to calculate remainder after division \n");  //asking the user for the input numbers to calculate remainder after division
    scanf("%d %d" ,&a,&b);
    int y = rem(a,b);
    printf("The remainder after division A number by B number is :%d",y);  // showing the result of the programmed math calculation (the remainder after division one number by another)
    return 0;
}

