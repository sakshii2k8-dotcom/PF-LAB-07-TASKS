
#include <stdio.h>

int main()
{
    int queue[15];
    int count = 0;
    int token, choice, i;

    while (count < 15)
    {
        printf("Enter patient token (-1 to close registration): ");
        scanf("%d", &token);

        if (token == -1)
            break;

        queue[count] = token;
        count++;
    }

    printf("\nCurrent Queue:\n");

    for (i = 0; i < count; i++)
    {
        printf("Position %d -> Token %d\n", i + 1, queue[i]);
    }

    while (1)
    {
        printf("\n1. Call next patient\n");
        printf("2. Insert emergency patient\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (count == 0)
            {
                printf("No patients waiting.\n");
                break;
            }

            printf("Calling patient with token: %d\n", queue[0]);

            for (i = 0; i < count - 1; i++)
            {
                queue[i] = queue[i + 1];
            }

            count--;

            printf("\nCurrent Queue:\n");

            for (i = 0; i < count; i++)
            {
                printf("Position %d -> Token %d\n", i + 1, queue[i]);
            }

            if (count == 0)
            {
                printf("All patients have been called.\n");
                break;
            }
        }
        else if (choice == 2)
        {
            if (count == 15)
            {
                printf("Queue is full. Cannot insert emergency patient.\n");
                continue;
            }

            printf("Enter emergency token: ");
            scanf("%d", &token);

            for (i = count; i > 0; i--)
            {
                queue[i] = queue[i - 1];
            }

            queue[0] = token;
            count++;

            printf("\nCurrent Queue:\n");

            for (i = 0; i < count; i++)
            {
                printf("Position %d -> Token %d\n", i + 1, queue[i]);
            }
        }
        else if (choice == 3)
        {
            printf("Exiting queue management.\n");
            break;
        }
        else
        {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

