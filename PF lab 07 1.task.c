
#include <stdio.h>

int main()
{
    int temperature[] = {31, 33, 35, 34, 38, 36, 32};
    int length = sizeof(temperature) / sizeof(temperature[0]);
    int i, highest, lowest, sum;
    float average;

    printf("Original Temperatures:\n");

    for (i = 0; i < length; i++)
    {
        printf("Day %d: %d C\n", i + 1, temperature[i]);
    }

    highest = temperature[0];
    lowest = temperature[0];
    sum = 0;

    for (i = 0; i < length; i++)
    {
        if (temperature[i] > highest)
        {
            highest = temperature[i];
        }

        if (temperature[i] < lowest)
        {
            lowest = temperature[i];
        }

        sum = sum + temperature[i];
    }

    average = (float)sum / length;

    printf("\nOriginal Statistics:\n");
    printf("Highest Temperature: %d C\n", highest);
    printf("Lowest Temperature: %d C\n", lowest);
    printf("Average Temperature: %.2f C\n", average);

    temperature[2] = 37;

    printf("\nUpdated Temperatures:\n");

    for (i = 0; i < length; i++)
    {
        printf("Day %d: %d C\n", i + 1, temperature[i]);
    }

    highest = temperature[0];
    lowest = temperature[0];
    sum = 0;

    for (i = 0; i < length; i++)
    {
        if (temperature[i] > highest)
        {
            highest = temperature[i];
        }

        if (temperature[i] < lowest)
        {
            lowest = temperature[i];
        }

        sum = sum + temperature[i];
    }

    average = (float)sum / length;

    printf("\nUpdated Statistics:\n");
    printf("Highest Temperature: %d C\n", highest);
    printf("Lowest Temperature: %d C\n", lowest);
    printf("Average Temperature: %.2f C\n", average);

    printf("\nMemory Addresses:\n");

    for (i = 0; i < length; i++)
    {
        printf("temperature[%d] = %p\n", i, (void *)&temperature[i]);
    }

    return 0;
}

