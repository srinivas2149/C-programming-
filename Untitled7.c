#include <stdio.h>

int main() {
    char name[50];    // To store user's name
    char className[20]; // To store user's class
    char branch[30];    // To store user's branch

    // Asking for user input
    printf("What is your name? ");
    fgets(name, sizeof(name), stdin); // Read string with spaces

    printf("What is your class? ");
    fgets(className, sizeof(className), stdin);

    printf("What is your branch? ");
    fgets(branch, sizeof(branch), stdin);

    // Printing the collected information
    printf("\nHello, %s", name);
    printf("Your class is: %s", className);
    printf("Your branch is: %s", branch);

    return 0;
}
