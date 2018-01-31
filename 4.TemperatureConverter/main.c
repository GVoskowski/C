#include <stdio.h>
#include <stdlib.h>

/*
    Converts Fahrenheit temperature to Celcius and vice versa!
*/

int main()
{
   printf("Would you like to convert Fahrenheit or Celcius?\n---- Type F or C to choose! ----\n");

    char selection;

    scanf("%c",&selection);

    if (selection != 'c' && selection != 'C' && selection != "F" && selection != 'f') //Checks if the selection was valid
    {
        printf("Invalid selection!\n");
        return 0;
    }
    else
    {

        float temp;

        printf("Please enter the temperature you'd like to convert!\n");
        scanf("%f",&temp);

            if(selection=='F' || selection== 'f')
            {
                printf("%.2fF = %.2f °C",temp,(5.0/9.0)*temp);      //Converts Fahrenheit to Celcius and prints out the value!
            }
            else if(selection=='C' || selection== 'c')
            {
        printf("%.2f°C = %.2fF",temp,(9.0/5.0)*temp);       //Converts Celcius to Fahrenheit and prints out the value!
            }
    }
}

