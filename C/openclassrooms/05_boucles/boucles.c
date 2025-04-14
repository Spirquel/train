#include <stdio.h>

int main()
{
    int result;
    char letter;

    while(result != 10)
    {
        printf("5 + 5 = ");
        scanf("%d", &result);
    }

    while(result < 12)
    {
        printf("bien joue\n");
        result++;
    }

    do //sera forcement parcouru une fois (meme si la condition est fausse)
    {
        printf("25 + 25 = ");
        scanf("%d", &result);
    }while(result != 50);

    for(int i = 0; i < 2; i++)
    {
        printf("bien joue\n");
    }

    while(1)
    {
        printf("entrer c pour fin du code..");
        scanf("%c", &letter);

        if(letter == 'c')
            break;
    }

    return 0;
}