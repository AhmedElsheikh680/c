#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int main()
{
    int number;
    printf("Enter A Number: ");
    scanf("%d", &number);
    printf("Factorial %d Is: %d", number, factorial(number));
    return 0;
}

int factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}
