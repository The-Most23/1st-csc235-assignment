#include<stdio.h>
int main()
{
    printf("Enter the names of the 10 students: ");
    char name[25];
    int i;
    for (int i = 1; i < 11; i++){
    printf("\nEnter name %d: ", i);
    fgets(name,25,stdin);
    printf("\nHEllo %s", name);
    }
}