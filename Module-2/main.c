#include <stdio.h>

int main()
{
    int studentsNumber,i,j,position;
    char name[30][51];
    int grade[30];
    int rank[30];

    // get the number of students
    scanf("%d",&studentsNumber);

    // get the students grade
    for(i = 0; i < studentsNumber; i++)
        scanf("%d",&grade[i]);

    // get the students name
    for(i = 0; i < studentsNumber; i++)
        scanf("%s",name[i]);

    // store the position according to grades
    for(j = 0; j < studentsNumber; j++)
    {
        position = 0;
        for(i = 0; i < studentsNumber; i++)
        {
            if(grade[j] < grade[i])
            {
                position++;
            }
            rank[j] = position + 1;
        }
    }

    // print the output
    for(i = 0; i < studentsNumber; i++)
        printf("%s rank is %d\n",name[i],rank[i]);

    return 0;
}
