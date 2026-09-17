#include <stdio.h>
#define SIZE 10
int main()
{
    int hashTable[SIZE];
    int key, index, i;
    for (i = 0; i < SIZE; i++)
    {
        hashTable[i] = -1;
    }
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &key);
        index = key % SIZE;
        hashTable[index] = key;
    }
    printf("\nHash Table:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("Index %d = %d\n", i, hashTable[i]);
    }
    return 0;
}
