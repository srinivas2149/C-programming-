#include <stdio.h>

int main() {
    char name[50];
    char className[20];
    char branch[30];

    printf("Enter your name: ");
    scanf("%s", name); // simpler, no spaces allowed

    printf("Enter your class: ");
    scanf("%s", className);

    printf("Enter your branch: ");
    scanf("%s", branch);

    printf("\nHello %s!\n", name);
    printf("Your class is %s.\n", className);
    printf("Your branch is %s.\n", branch);

    return 0;
}
