#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++) {
        minIndex = i;

        // Find the minimum element in the unsorted part of the array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int choice, n;

    printf("Selection Sort Implementation\n");
    printf("-------------------------------\n");
    printf("1. Unsorted array\n");
    printf("2. Sorted array\n");
    printf("3. Reverse sorted array\n");
    printf("4. Array with negative numbers\n");
    printf("5. Array with all identical elements\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}


/*
output
Selection Sort Implementation
-------------------------------
1. Unsorted array
2. Sorted array
3. Reverse sorted array
4. Array with negative numbers
5. Array with all identical elements
Enter your choice: 1
Enter the number of elements: 5
Enter 5 elements: 34 65 12 765 987
Original array: 34 65 12 765 987 
Sorted array: 12 34 65 765 987 

1. Unsorted array
2. Sorted array
3. Reverse sorted array
4. Array with negative numbers
5. Array with all identical elements
Enter your choice: 2
Enter the number of elements: 5
Enter 5 elements: 45 32 89 76 12
Original array: 45 32 89 76 12 
Sorted array: 12 32 45 76 89 

1. Unsorted array
2. Sorted array
3. Reverse sorted array
4. Array with negative numbers
5. Array with all identical elements
Enter your choice: 3
Enter the number of elements: 5
Enter 5 elements: 34 78 54 78 12
Original array: 34 78 54 78 12 
Sorted array: 12 34 54 78 78 


1. Unsorted array
2. Sorted array
3. Reverse sorted array
4. Array with negative numbers
5. Array with all identical elements
Enter your choice: 4
Enter the number of elements: 5
Enter 5 elements: -45 -876 -67 -23 -12
Original array: -45 -876 -67 -23 -12 
Sorted array: -876 -67 -45 -23 -12 


1. Unsorted array
2. Sorted array
3. Reverse sorted array
4. Array with negative numbers
5. Array with all identical elements
Enter your choice: 5
Enter the number of elements: 5 
Enter 5 elements: 6  6 6 6 6 
Original array: 6 6 6 6 6 
Sorted array: 6 6 6 6 6 

*/