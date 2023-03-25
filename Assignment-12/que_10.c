
//  Write a recursive function to print reverse of a given number

#include <stdio.h>

void print_reverse(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d", n % 10);
    print_reverse(n / 10);
}

int main()
{
    int number = 12345;
    printf("The reverse of %d is: ", number);
    print_reverse(number);
    printf("\n");
    return 0;
}
