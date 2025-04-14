#include "stdio.h"

void TestPointeur(int *ptr_int)
{
    *ptr_int *= 3;
}

int main()
{
    int nb = 1;
    int *ptr_nb = &nb;

    TestPointeur(&nb);
    printf("value nb: %d\n", nb);

    TestPointeur(ptr_nb);
    printf("value nb: %d\n", nb);

    return 0;
}