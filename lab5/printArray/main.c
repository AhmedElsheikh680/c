#include <stdio.h>
#include <stdlib.h>
int printArray(int nums[], int size);
int main()
{
    int numbers[] = {2,4,6,8,10};
    printArray(numbers, 5);
    return 0;
}

int printArray(int nums[], int size){

    for(int i=0; i<size; i++) {
        printf("%d\n", nums[i]);
    }
}
