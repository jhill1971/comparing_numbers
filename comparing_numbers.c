#include <stdio.h>
#include <stdlib.h>


int main() {
    // Declare variables
    int n1,n2,n3,result;

    // Get user input
    printf("Enter the first integer: ");
    scanf("%d", &n1);
    printf("Enter the second integer; ");
    scanf("%d", &n2);
    printf("Enter the third integer: ");
    scanf("%d", &n3);
    // Comparison algorithm
    if (n1 > n2){
        result = n1;
    }
    else{
        result = n2;
    }

    if (result  < n3){
        result = n3;
    }

    // Output
    printf("The largest integer is %d\n", result);
    return 0;
}

