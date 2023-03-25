// Write a recursive function to print first N odd natural numbers in reverse order

#include <stdio.h>

void print_odd_numbers_reverse(int n)
{
    if (n > 0)
    {
        printf("%d ", 2 * n - 1);
        print_odd_numbers_reverse(n - 1);
    }
}

int main()
{
    int n = 10;
    printf("The first %d odd natural numbers in reverse order are: ", n);
    print_odd_numbers_reverse(n);
    printf("\n");
    return 0;
}
