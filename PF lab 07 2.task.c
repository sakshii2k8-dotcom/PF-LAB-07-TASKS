
#include <stdio.h>

int main()
{
    float marks[10];
    float sum = 0, average;
    int i, count = 0;

    // Step 1: Input marks with validation
    for (i = 0; i < 10; i++)
    {
        do
        {
            printf("Enter marks for student %d: ", i + 1);
            scanf("%f", &marks[i]);

            if (marks[i] < 0 || marks[i] > 20)
            {
                printf("Invalid marks! Enter marks between 0 and 20.\n");
            }

        } while (marks[i] < 0 || marks[i] > 20);
    }

    // Step 2: Display original report and calculate sum
    printf("\n--- Original Grade Report ---\n");

    for (i = 0; i < 10; i++)
    {
        printf("Student %d: %.2f - ", i + 1, marks[i]);

        if (marks[i] >= 18)
            printf("Excellent\n");
        else if (marks[i] >= 14)
            printf("Good\n");
        else if (marks[i] >= 10)
            printf("Average\n");
        else
            printf("Needs Improvement\n");

        sum = sum + marks[i];
    }

    // Step 3: Calculate class average
    average = sum / 10;

    printf("\nClass Average: %.2f\n", average);

    // Step 4: Count students above average
    for (i = 0; i < 10; i++)
    {
        if (marks[i] > average)
        {
            count++;
        }
    }

    printf("Students scoring above average: %d\n", count);

    // Step 5: Add 1.5 bonus marks, capped at 20
    for (i = 0; i < 10; i++)
    {
        marks[i] = marks[i] + 1.5;

        if (marks[i] > 20)
        {
            marks[i] = 20;
        }
    }

    // Step 6: Display revised report
    printf("\n--- Revised Grade Report ---\n");

    sum = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Student %d: %.2f - ", i + 1, marks[i]);

        if (marks[i] >= 18)
            printf("Excellent\n");
        else if (marks[i] >= 14)
            printf("Good\n");
        else if (marks[i] >= 10)
            printf("Average\n");
        else
            printf("Needs Improvement\n");

        sum = sum + marks[i];
    }

    printf("\nRevised Class Average: %.2f\n", sum / 10);

    return 0;
}

