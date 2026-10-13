
#include <stdio.h>

int main()
{
    char name[20];
    int i = 0;
    int count = 0;

   
    printf("Enter username (alphabets only): ");
    scanf("%19[A-Za-z]", name);

   
    printf("\nCharacters stored in the array:\n");

    while (name[i] != '\0')
    {
        printf("Character at index %d: %c\n", i, name[i]);
        count++;
        i++;
    }

    printf("\nTotal characters stored: %d\n", count);

    
    if (name[0] >= 'a' && name[0] <= 'z')
    {
        name[0] = name[0] - 32;
    }

    
    printf("Final username: %s\n", name);

    return 0;
}

