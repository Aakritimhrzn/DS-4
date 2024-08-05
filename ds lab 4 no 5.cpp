#include <stdio.h>


int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; }

int main() {
    int arr[] = {34, 78, 12, 56, 89, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 56; 

    int result = linear_search(arr, size, target);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

