#include <stdio.h>

int main()
{
    int start, end, i, j, factor;

    printf("Enter starting and ending numbers: ");
    scanf("%d%d", &start, &end);

    printf("Prime numbers are:\n");

    for (i = start; i <= end; i++)
    {
        if (i <= 1)
            continue;

        factor = 1;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                factor = 0;
                break;
            }
        }

        if (factor)
            printf("%d ", i);
    }

    return 0;
}