#include <stdio.h>

// Function prototype
void func(int arr[5]) {
    // Example implementation: Print the elements of the array
    for (int i = 0; i < 5; ++i) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

int main(void) {
    unsigned int i = 0;
    unsigned int j = 0;
    int arr[3][5] = {  // Initialize the 2D array
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    }; 

    func(arr[i]);  // Pass the first row of the array to func
    int x = arr[i][j];  // Access an element in the 2D array
    printf("x = %d\n", x);

    return 0;
}
