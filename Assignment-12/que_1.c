// 1. Write a recursive function to print first N natural numbers
#include <stdio.h>

void print_natural_numbers(int n)
{
    if (n > 0)
    {
        print_natural_numbers(n - 1);
        printf("%d ", n);
    }
}

int main()
{
    int n = 10;
    printf("The first %d natural numbers are: ", n);
    print_natural_numbers(n);
    printf("\n");
    return 0;
}
