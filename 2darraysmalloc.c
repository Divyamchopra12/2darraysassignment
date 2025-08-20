#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;

    // Allocate memory for 5 integers
    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign and print values
    int x=27
    for (int i = 0; i<x; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}