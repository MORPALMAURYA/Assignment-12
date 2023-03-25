// Write a recursive function to print first N even natural numbers in reverse order

#include <stdio.h>

void print_even_numbers_reverse(int n)
{
    if (n > 0)
    {
        printf("%d ", 2 * n);
        print_even_numbers_reverse(n - 1);
    }
}

int main()
{
    int n = 10;
    printf("The first %d even natural numbers in reverse order are: ", n);
    print_even_numbers_reverse(n);
    printf("\n");
    return 0;
}
