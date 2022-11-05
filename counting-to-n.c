#include <stdio.h>

int main( ){
    int number;
    int i;
    printf("Enter the number u are counting to: ");
    scanf("%d",&number);
    for (i = 1; i <= number; i++ ){
        printf("%d\n",i);
    }

    return 0;
}