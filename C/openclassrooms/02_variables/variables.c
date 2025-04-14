#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[])
{
    int variable_int;
    char variable_char;

    printf("int: %d, char: %d\n", variable_int, variable_char);

    variable_int = 25;
    variable_char = 25;

    printf("int: %d, char: %d\n", variable_int, variable_char);

    unsigned int variable_usigned_int;
    const char variable_const_char;

    printf("u_int: %u, c_char: %d\n", variable_usigned_int, variable_const_char);

    float variable_float;
    double variable_double;

    printf("float: %f, double: %f\n", variable_float, variable_double);
    
    int return_int = 0;
    
    printf("insert value: ");

    scanf("%d", &return_int);

    printf("return value: %d\n", return_int);

    return 0;
}