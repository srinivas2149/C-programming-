#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    
    int negated_number = number * -1;

    printf("The negated number is: %d\n", negated_number);

    return 0;
}
