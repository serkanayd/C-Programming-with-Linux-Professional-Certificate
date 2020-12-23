#include <stdio.h>

int main() {
    double avg;
    int num = 0, sum = 0;
    int turn, i, red, yellow, green;

    scanf("%d",&turn);

    for(i = 1; i <= turn; i++){
        scanf("%d %d %d",&red,&yellow,&green);
        num = red + yellow*10 + green*100;
        sum += num;
        avg = (double)sum/(double)i;
        printf("%d. you rolled: %d, current average: %.1lf\n",i,num,avg);
    }

    return 0;
}
