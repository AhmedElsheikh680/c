#include <stdio.h>
#include <stdlib.h>
int calcPower(int base, int exponential);
int main()
{
    int base, power;
    printf("Enter Base Number: ");
    scanf("%d", &base);
    printf("Enter Power Number: ");
    scanf("%d", &power);
    printf("%d ^ %d = %d", base, power, calcPower(base, power));
    return 0;
}

int calcPower(int base, int exponential) {
    int result=1;
    for(int i=1; i<=exponential; i++) {
        result *=base;
    }
    return result;
}
