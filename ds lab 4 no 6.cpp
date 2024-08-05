#include <stdio.h>


int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; 

        
        if (arr[mid] == target) {
            return mid; 
        }
        
        else if (arr[mid] < target) {
            left = mid + 1;
        }
       
        else {
            right = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 50; 

    int result = binary_search(arr, size, target);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

