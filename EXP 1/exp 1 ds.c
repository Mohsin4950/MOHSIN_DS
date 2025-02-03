#include <stdio.h>
#include <stdlib.h>

#define SIZE 10  // Global constant for the size of the array

// Global array and index
int arr[SIZE];  // Initialize all elements to NULL
int indx = 0;        // Global variable for array operations

void insertElement();
void deleteElement();
void displayArray();

void main() {
    int choice, element;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display Array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter index position where to insert: ");
                scanf("%d", &indx);
                printf("Enter element to insert: ");
                scanf("%d", &element);
                insertElement(element);  // Insert the element
                break;
            case 2:
                printf("Enter index position to be deleted: ");
                scanf("%d", &indx);
                deleteElement();  // Delete the element
                break;
            case 3:
                displayArray();  // Display the array
                break;
            case 4:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    }
}

// Function to insert an element at a specific index
void insertElement(int element)
    {
    if (indx < 0 || indx >= SIZE) {  // Check for valid index
        printf("Invalid index: %d\n", indx);
    }
    else
    {
    arr[indx] = element;  // Directly insert the element at the specified index
    printf("Element %d inserted at index %d.\n", element, indx);
    }
}

// Function to delete an element at a specific index
void deleteElement()
    {
    if (indx < 0 || indx >= SIZE) {  // Check for valid index
        printf("Invalid index: %d\n", indx);

    }
    else
    {
    arr[indx] = 0;  // Directly delete the element by setting it to 0
    printf("Element at index %d deleted.\n", indx);
    }

}

// Function to display the array
void displayArray()
{
   int emptyflag=1;
    printf("Array elements: ");
    for (int i = 0; i < SIZE; i++)
{
        if (arr[i] != 0) // Check if any element is non-zero
                {
emptyflag = 0;
           }
           printf("%d ", arr[i]);
    }
    printf("\n");
    if (emptyflag==1)
    {
        printf("The array is empty.\n");
    }

}
