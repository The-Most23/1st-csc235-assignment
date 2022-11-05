#include<stdio.h>
#include<string.h>
int main(){
    //declaring variables name nd lenght
    char name[25];
    int length;
    printf("Enter the name u wish to reverse: ");
    // requesting and placing the values given to the name variable
    fgets(name,25,stdin);
    
    
    for (length = strlen(name) - 1; length >= 0; length-- ){
        printf("%c",name[length]);
    }
}