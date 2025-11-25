#include <stdio.h>

int main()
{
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // The 'for' loop calculates the sum of integers from 1 up to 'num'
    for (count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
