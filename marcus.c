#include <stdio.h>

int main() {
    int numStudents, i, j;
    float math, english, ict, economics, average;
    float classTotal = 0;
    float averages[100]; // array to store averages //

    // Ask for the total number of students //
    printf("Enter the total number of students: ");
    scanf("%d", &numStudents);

    // Loop through each student //
    for (i = 1; i <= numStudents; i++) {
        printf("Enter marks for student %d:\n", i);

        // Ask for marks in each subject //
        printf("Mathematics: ");
        scanf("%f", &math);
        printf("English: ");
        scanf("%f", &english);
        printf("ICT: ");
        scanf("%f", &ict);
        printf("Economics: ");
        scanf("%f", &economics);

        // Calculate average //
        average = (math + english + ict + economics) / 4;

        // Store average in array //
        averages[i-1] = average;

        // Add to class total //
        classTotal += average;
    }

    // Calculate class average //
    float classAverage = classTotal / numStudents;

    // Display results in table form //
    printf("\nStudent\tAverage\tPosition\n");
    printf("------\t-------\t--------\n");

    // Sort averages in descending order //
    for (i = 0; i < numStudents; i++) {
        for (j = i+1; j < numStudents; j++) {
            if (averages[i] < averages[j]) {
                float temp = averages[i];
                averages[i] = averages[j];
                averages[j] = temp;
            }
        }
    }

    // Display sorted averages with position //
    for (i = 0; i < numStudents; i++) {
        printf("%d\t%.2f\t%d\n", i+1, averages[i], i+1);
    }

    // Display class average //
    printf("\nClass average: %.2f\n", classAverage);

    return 0;
}