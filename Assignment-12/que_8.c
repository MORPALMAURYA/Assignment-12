// Write a recursive function to print binary of a given decimal number

#include <stdio.h>

void print_binary(int n)
{
    if (n > 1)
    {
        print_binary(n / 2);
    }
    printf("%d", n % 2);
}

int main()
{
    int decimal = 17;
    printf("The binary representation of %d is: ", decimal);
    print_binary(decimal);
    printf("\n");
    return 0;
}
