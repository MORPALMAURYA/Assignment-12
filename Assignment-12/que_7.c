// Write a recursive function to print squares of first N natural numbers

#include <stdio.h>

void print_squares(int n)
{
    if (n > 0)
    {
        print_squares(n - 1);
        printf("%d ", n * n);
    }
}

int main()
{
    int n = 10;
    printf("The squares of the first %d natural numbers are: ", n);
    print_squares(n);
    printf("\n");
    return 0;
}
