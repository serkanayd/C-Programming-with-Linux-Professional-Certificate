#include <stdio.h>

int isReversed(char *, char *);

int main()
{
    char word1[99];
    char word2[99];

    // get the words from user
    scanf("%s",word1);
    scanf("%s",word2);

    if(isReversed(word1,word2) == 1)
        printf("%s is the reverse of %s",word1,word2);
    else
        printf("%s is not the reverse of %s",word1,word2);

}

int isReversed(char *word1, char *word2){
    int size = 0;
    int i = 0;

    //learn the size of word
    while(*(word1 + size) != '\0')
        size = size + 1;

    while(*(word1 + i) != '\0'){
        if(*(word1 + i) == *(word2 + size - 1 - i))
            i++;
        else
            return 0;
    }// end of while

    return 1;
}
