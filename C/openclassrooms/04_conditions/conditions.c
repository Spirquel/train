#include <stdio.h>


int main()
{
    int age;

    printf("age: ");
    scanf("%d", &age);

    if(age > 18)
    {
        printf("majeur\n");
    }
    else if(age >= 10 && age <= 17)
    {
        printf("adolescent\n");
    }
    else if(age == 0 || age == 1)
    {
        printf("bebe\n");
    }
    else 
    {
        printf("etat non determine\n");
    }
    
    switch(age)
    {
        case 8:
            printf("enfant\n");
            break;
        case 18:
            printf("majeur\n");
            break;
    }


    if(!(age < 18))
    {
        printf("majeur\n");
    }

    int condition = age >= 8;
    printf("condition etat: %d\n", condition);

    condition = (age >= 18) ? 1 : 0;
    printf("condition etat: %d\n", condition);

    return 0;
}