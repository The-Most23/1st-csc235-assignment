#include<math.h>
#include<stdio.h>
#include<stdlib.h>


int main(){
    double a;
    double b;
    double c;
    double discriminant;
    double denominator;
    double numerator1;
    double numerator2;
    double root1;
    double root2;


    printf("Enter a: ");
    scanf("%lf",&a);

    printf("Enter b: ");
    scanf("%lf",&b);

    printf("Enter c: ");
    scanf("%lf",&c);
    
    discriminant = b*b - 4*a*c;
    denominator = 2*a;
    numerator1 = (-b + sqrt(discriminant));
    numerator2 = (-b - sqrt(discriminant));
    root1 = numerator1 / denominator;
    root2 = numerator2 / denominator;
    
    printf("Root 1 is :%.lf ", root1);
    printf("\nRoot 2 is :%.lf ", root2);
    
    return 0;
}