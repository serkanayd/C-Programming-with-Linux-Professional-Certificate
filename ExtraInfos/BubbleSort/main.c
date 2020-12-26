#include <stdio.h>

void bubbleSort(int [], int);

int main()
{
    int list[] = {759, 14, 2, 900, 106, 77, -10, 8, -3, 5}; /* unsorted list */
    int size,i;

    size = sizeof(list)/sizeof(list[0]);

    printf("Original array:\n");
    for(i = 0; i < size; i++)
        printf("%d ",list[i]);
    printf("\n");

    bubbleSort(list, size);

    return 0;
}

void bubbleSort(int list[], int size){
    int i,j,temp;

    for(j = 0; j < size; j++){
        for(i = 0; i < size-1; i++){
            if(list[i] > list[i+1]){
                temp = list[i+1];
                list[i+1] = list[i];
                list[i] = temp;
            }
        }
    }

    printf("Sorted array :\n");
    for(i = 0; i < size; i++)
        printf("%d ",list[i]);
}
