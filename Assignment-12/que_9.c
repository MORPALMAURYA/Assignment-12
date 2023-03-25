// Write a recursive function to print octal of a given decimal number
#include <stdio.h>

void print_octal(int n)
{
    if (n > 7)
    {
        print_octal(n / 8);
    }
    printf("%d", n % 8);
}

int main()
{
    int decimal = 87;
    printf("The octal representation of %d is: ", decimal);
    print_octal(decimal);
    printf("\n");
    return 0;
}
