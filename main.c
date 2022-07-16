/*
project : A simple quadratic solution
Author   :@kelvin Gichuhi
compiler :C89
Lincense : MIT
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float root1, root2;
    float root_part,denominator;


    printf("Enter values of a,b and c\n");
    scanf("%f%f%f",&a, &b, &c);

    root_part = sqrt(b * b - 4 * a * c);
    denominator = 2 * a;

    root1     = (- b + root_part) /denominator;
    root2     = (- b - root_part) /denominator;
    printf("Root 1 = %f\nRoot 2 =%f", root1,root2);

    return 0;
}



