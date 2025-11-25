#include <stdio.h>

int main()
{
    // Initialize a counter variable to 1 (the starting number)
    int count = 1;

    printf("Numbers from 1 to 5:\n");

    // Start the while loop
    while (count <= 5)
    {
        // 1. Display the current value of count
        printf("%d\n", count);

        // 2. Increment the counter to move to the next number
        count = count + 1;
        // OR simply: count++;
    }

    return 0;
}
