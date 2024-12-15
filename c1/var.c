#include <stdio.h>
#include <stdlib.h>

// Define swap function before main
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int a = 20;
    int b = 30;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b); // Call the swap function
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0; 
}
