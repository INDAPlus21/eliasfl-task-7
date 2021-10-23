#include <stdio.h>
#include <stdlib.h>

// Compare integers.
int cmp_int(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int i, size;
    int total = 0;
    int *numbers;
    scanf("%d", &size);
    numbers = malloc(size * sizeof(int));
    for (i = 0; i < size; i++)
        scanf("%d", &numbers[i]);

    qsort((void *)numbers, (size_t)size, sizeof(int), cmp_int);

    for (i = 0; i < (size + 1) / 2; i++)
        total += numbers[size - i - 1];
    printf("%d", total);
}