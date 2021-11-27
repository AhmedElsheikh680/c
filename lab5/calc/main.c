#include <stdio.h>
#include <stdlib.h>
float add(float num1, float num2);
float sub(float num1, float num2);
float multiply(float num1, float num2);
float division(float num1, float num2);

float main()
{
    float number1, number2, result;
    char ch;
    printf("Enter First Number: ");
    scanf("%f", &number1);
    printf("Enter Second Number: ");
    scanf("%f", &number2);
    ch=getch();
    switch(ch) {
        case '+':
            result= add(number1, number2);
            break;
        case '-':
            result= sub(number1, number2);
            break;
        case '*':
            result= multiply(number1, number2);
            break;
        case '/':
            result= division(number1, number2);
            break;
        default:
            printf("Invalid Operation");
        }
    printf("%f", result);
    return 0;
}

float add(float num1, float num2){
     return num1 + num2;
}
float sub(float num1, float num2){
     return num1 - num2;
}
float multiply(float num1, float num2){
     return num1 * num2;
}
float division(float num1, float num2){
     return num1 / num2;
}
