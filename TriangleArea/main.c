#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    A Triangle's area using its sides is calculated by the following formula

        T = sqrt(s*(s-a)*(s-b)*(s-c))

    where s = (a+b+c)/2   [s for semiperimeter]
*/

int main()
{
    float a,b,c; //Variable declaration for Triangle's side

    printf("Enter values for the Triangle's A,B,C sides!\n");

    scanf("%f%f%f",&a,&b,&c); // Assign user's input values on Triangle's sides

    if(a>0 && b>0 && c>0) //Sanity check,Sides cannot be zero or negative
    {
        if((a+b)>c && b+c>a && a+c>b) //Sanity check, Sides should adhere to the triangle inequality theorem.
        {

            float s = (a+b+c)/2; //Calculate the semiperimeter

            float area = sqrt(s*((s-a)*(s-b)*(s-c))); //Calculate Triangles area using the formula

            printf("Triangle's area is %.1f",area);

            return 0;
        }
        else
        {
            printf("Sides do not adhere to the triangle inequality theorem!\n"); //Notifies the user that at least one of the values was incorrect!
        }
    }
    else
    {
        printf("Please enter positive values for Triangle's sides"); //Notifies the user that at least one of the values was incorrect!
        return 0;
    }
}
