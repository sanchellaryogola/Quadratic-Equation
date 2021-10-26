/*
Project: Quadratic Equation Slution
Author: HILLARY OGOLA
Date:26th Oct,2021
Compiler: GCC
Language: C99
License: MIT

INPUTS->a,b,c
OUTPUTS->x1,x2
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
     //variable
     int a,b,c;
     float x1,x2;

     //capture input
     printf("\tQuadratic Equation solver!\n");
     printf("Enter the values a,b,c: ");
     scanf("%d%d%d",&a,&b,&c);

     //processing/computation
     if ((b*b-4*a*c)== 0) {
        x1=x2= (-b + sqrt(b*b-4*a*c))/(2*a);
     }
     if ((b*b-4*a*c) > 0) {
        x1= (-b + sqrt(b*b-4*a*c))/(2*a);
        x2= (-b - sqrt(b*b-4*a*c))/(2*a);
     }
     if ((b*b-4*a*c) < 0){
        printf(" the equation has no roots\n");
        exit(1);
     }

     //output
    printf("The values of x are %f\n");
    return 0;
}
