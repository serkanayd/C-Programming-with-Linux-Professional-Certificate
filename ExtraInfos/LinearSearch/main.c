#include <stdio.h>

int linearSearch(int [], int, int);

int main()
{
    int array[] = {3, 8, 20 ,6, 2, 32, 61, 55};
    int size;
    int number = 20;
    int result;

    size = sizeof(array)/sizeof(array[0]);

    result = linearSearch(array, number, size);

    if(result)
        printf("Number: %d is found in array",number);
    else
        printf("Number: %d is not found in array",number);

    return 0;
}

int linearSearch(int array[], int number, int size){
    int i;

    for(i = 0; i < size; i++){
        if(number == array[i])
            return 1;
    }
    return 0;
}
