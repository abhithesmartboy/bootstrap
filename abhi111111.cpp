#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float average, percentage;

    // Input marks
    printf("Enter marks of 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculate average and percentage
    average = total / 5.0;
    percentage = (total / (5.0 * 100)) * 100; // Assuming each subject is out of 100

    // Output with formatting
    printf("\n---- Result ----\n");
    printf("Total Marks    : %d\n", total);
    printf("Average Marks  : %.2f\n", average);
    printf("Percentage     : %.2f%%\n", percentage);

    return 0;
}

