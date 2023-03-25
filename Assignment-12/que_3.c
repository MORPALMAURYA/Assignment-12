// Write a recursive function to print first N odd natural numbers

#include <stdio.h>

void print_odd_numbers(int n)
{
    if (n > 0)
    {
        print_odd_numbers(n - 1);
        printf("%d ", 2 * n - 1);
    }
}

int main()
{
    int n = 10;
    printf("The first %d odd natural numbers are: ", n);
    print_odd_numbers(n);
    printf("\n");
    return 0;
}
