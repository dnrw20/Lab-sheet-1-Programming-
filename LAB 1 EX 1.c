#include <stdio.h>
#include <string.h>

void numType(int n, char *sentence)
{
    int i, flag = 0;

    // Condition for even or odd number
    if(n % 2 == 0) // using loop to find adequate answer if the number is odd or even
        strcpy(sentence, "is even");
    else
        strcpy(sentence, "is odd");

    for(i = 2; i <= n/2; i++)
    {
        // Condition for nonprime number
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n == 1)
    {
        strcat(sentence, " and not prime"); // using strcat function to cancentrate two strings
    }
    else
    {
        if (flag == 0)
            strcat(sentence, " and prime");
        else
            strcat(sentence, " and not prime");
    }

    //return sentence;
}

int main()
{
    int num, i;
    char type[32];
// Printing the sentence to ask to put input
    printf("What is your number?\n");
    scanf("%d", &num); // using scanf function in order to allow accept input from the keyboard

    for (i = 1; i <= num; i++) //using a for loop to initialize any loop variables
    {
        numType(i, type);
        printf("%d %s\n", i, type);
    }
    return 0;
}
