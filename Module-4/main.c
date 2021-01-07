#include <stdio.h>
#include <stdlib.h>

int ** allocateIntStarArray(int);
int * allocateIntArray(int);

int main(void)
{
    int row,col,i,j;
    int ** temperatures;

    scanf("%d",&col);
    scanf("%d",&row);

    temperatures = allocateIntStarArray(row);

    for(i = 0; i < row; i++){
        temperatures[i] = allocateIntArray(col);
    }

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            scanf("%d",&temperatures[i][j]);
        }
    }

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            if( temperatures[i][j] >= 100 && temperatures[i][j] <= 1000){
                printf("[*]");
            }else if( temperatures[i][j] > 1000){
                 printf("[X]");
            }else{
                 printf("[ ]");
            }
        }
        printf("\n");
    }
    return 0;
}

int ** allocateIntStarArray(int num){
	int ** ptr = (int **) malloc(num * sizeof(int *));
	return ptr;
}

int * allocateIntArray(int num){
	int * ptr = (int *) malloc(num * sizeof(int));
	return ptr;
}
