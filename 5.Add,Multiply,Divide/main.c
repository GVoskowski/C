#include <stdio.h>
#include <stdlib.h>

/*
    Write a program that reads 4 numbers (x,y,z,w) and calculates
    i)x+y+z+w
    ii)xyzw
    iii)(x+y)(z+w)

    Bugs: Works ONLY with correct input (number),no workarround in case user enters characters.

*/

int main()
{
    float x,y,z,w;
    printf("Insert numerical values for x,y,z,w\n");

    scanf("%f%f%f%f",&x,&y,&z,&w);

    printf("x+y+z+w : %f\n", x+y+z+w);

    printf("x*y*z*w : %f\n", x*y*z*w);

    if((z+w) != 0)
    {
        printf("(x+y)/(z+w) : %f\n",(x+y)/(z+w));
    }
    else
    {
        printf("Incorrect values,cannot divide with zero!\n");
    }

}
