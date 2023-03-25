// Write a recursive function to print first N even natural numbers

#include <stdio.h>

void print_even_numbers(int n)
{
    if (n > 0)
    {
        print_even_numbers(n - 1);
        printf("%d ", 2 * n);
    }
}

int main()
{
    int n = 10;
    printf("The first %d even natural numbers are: ", n);
    print_even_numbers(n);
    printf("\n");
    return 0;
}
