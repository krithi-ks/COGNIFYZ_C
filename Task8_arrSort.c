// C PROGRAM - COGNIFYZ
// TASK 8 - ARRAY SORTING

// BUBBLE SORT

#include <stdio.h>

void ascend_sort(int arr[], int n);
void descend_sort(int arr[], int n); 

int main (void)
{
    int n, option, temp;

    // Read size of array, elements and order
    printf("\nEnter size of an array: "); 
    scanf("%d", &n); 

    int arr[n];
    printf("Enter elements of an array:\n"); 
    for(int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    printf("Choose the sorting order:\n1. Ascending order\n2. Descending order\nOption: ");
    scanf("%d", &option);

    // Order of sorting - Bubble Sort
    switch (option) {
        case 1 :
            ascend_sort(arr, n);
            break;
        case 2 :
            descend_sort(arr, n);
            break;
        default:
            printf("Invalid character!\n");
    }

    printf("Your Sorted Array:\n");
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    printf("\n");
}

// Ascending order logic
void ascend_sort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Descending order logic
void descend_sort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] < arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}