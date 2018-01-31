#include <stdio.h>
#include <stdlib.h>
/*
    This program takes two integers
    as an input from the user.
    Then prints the sum and the difference between them
*/

int main()
{
    int number1,number2; //Variable declaration

    printf("Please enter two numbers\n"); // Prompts the user

    scanf("%d%d",&number1,&number2); //Read the input values and assign them to our number variables

    printf("Sum : %d + %d = %d\n",number1,number2,number1+number2); //Prints out the summary of the two numbers
    printf("Diff : %d + %d = %d\n",number1,number2,number1-number2); //Prints out the difference of the two numbers

    return 0;
}
