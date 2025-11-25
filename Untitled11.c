#include <stdio.h>

int main() {
    float m1, m2, m3, total, average;
    char G;

    
    printf("Enter marks: ");
    scanf("%f %f %f", &m1, &m2, &m3);

  
    total = m1 + m2 + m3;
    average = total / 3;

    
    if (average >= 90) {
        G = 'A';
    } else if (average >= 80) {
        G = 'B';
    } else if (average >= 70) {
        G = 'C';
    } else if (average >= 60) {
        G = 'D';
    } else {
        G = 'F';
    }

    
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", G);

    
    if (average >= 60) {
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}
