
#include <stdio.h>

int main()
{
    int stock[] = {25, 12, 8, 40, 5, 18, 3, 22};

    int size = sizeof(stock) / sizeof(stock[0]);
    int i, item, sold;
    int total = 0;
    int minStock = stock[0];
    int minPosition = 1;

  
    printf("--- Initial Stock Levels ---\n");

    for (i = 0; i < size; i++)
    {
        printf("Item %d: %d units\n", i + 1, stock[i]);

        if (stock[i] < 10)
        {
            printf("Item %d is LOW on stock - reorder required\n",
                   i + 1);
        }
    }

    
    printf("\n--- Lunch Rush Sales ---\n");

    while (1)
    {
        printf("\nEnter item number (1-%d, or 0 to finish): ", size);
        scanf("%d", &item);

        if (item == 0)
        {
            break;
        }

        if (item < 1 || item > size)
        {
            printf("Invalid item number!\n");
            continue;
        }

        printf("Enter quantity sold: ");
        scanf("%d", &sold);

        if (sold < 0)
        {
            printf("Invalid quantity! Sale cannot be negative.\n");
        }
        else if (sold > stock[item - 1])
        {
            printf("Error! Not enough stock. Sale rejected.\n");
        }
        else
        {
            stock[item - 1] = stock[item - 1] - sold;
            printf("Sale recorded successfully.\n");
            printf("Remaining stock of item %d: %d\n",
                   item, stock[item - 1]);
        }
    }

   
    printf("\n--- Final Stock Levels ---\n");

    for (i = 0; i < size; i++)
    {
        printf("Item %d: %d units\n", i + 1, stock[i]);

        total = total + stock[i];

        if (stock[i] < minStock)
        {
            minStock = stock[i];
            minPosition = i + 1;
        }
    }

    
    printf("\nTotal units remaining: %d\n", total);
    printf("Least stock: %d units\n", minStock);
    printf("Position of item with least stock: %d\n",
           minPosition);

    return 0;
}

