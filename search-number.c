#include <stdio.h>

// Function to sort the array in ascending order
void sortArray(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                // Swap elements
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[10] = {32, 45, 21, 67, 34, 89, 22, 78, 56, 44};
    int size = 10;
    int num, found = 0;

    // Ask user for the number to search
    printf("Enter the number you want to search: ");
    scanf("%d", &num);

    // Search for the number in the array
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            printf("Number %d found at position %d\n", num, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Number %d not found in the array.\n", num);
    }

    // Sort the array in ascending order
    sortArray(arr, size);

    // Display the sorted array
    printf("Array in ascending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
