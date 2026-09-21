#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/
int sum_to_n(int n) {
    int sum= 0;
    // TODO: implement sum with a for loop
    for(int k=1; k<=n; k++){
        sum +=k;
        
    }
    return sum; // placeholder
}

int main(void) {
    int n;

    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1) { 
        printf("Invalid input. Please enter a valid integer.\n"); 
        return 1;
    };
    // if(n<1){
    //     printf("enter positive integer");
    //     return 0;
    // }

    int result = sum_to_n(n);
    printf("%d", result);

    // TODO: validate input, call function, and print result

    return 0;
}
