#include<stdio.h>

int binarySearch(int [], int, int);

int main(void) {
    int list[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900}; /* sorted list */
    int number = 106;
    int found,size;

    size = sizeof(list)/sizeof(list[0]);

    found = binarySearch(list, number, size);

    if (!found)
        printf("Number %d was not found in the array. \n", number);
    else
        printf("Number %d was found in the array.\n", number);

	return 0;
}

int binarySearch(int array[], int number, int size){

    int right, left, mid, found;

    left = 0;
    right = size - 1;
    found = 0;

    while (!found && (left <= right)) {
        mid = (left + right)/2; // middle index
        if (number == array[mid]) {
            found = 1;  // found item!
        } else if (number < array[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return found;
}
