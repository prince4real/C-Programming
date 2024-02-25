#include <stdio.h>

int findLargest(int arr[], int n) {
    int max = arr[0]; // Assume the first element is the largest
    
    // Iterate through the array to find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is larger
        }
    }
    
    return max;
}

int main() {
    int arr[] = {10, 4, 7, 25, 13};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    
    int largest = findLargest(arr, size); // Call function to find the largest element
    
    printf("The largest element in the array is: %d\n", largest);
    
    return 0;
}
