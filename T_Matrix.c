#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int rc;
    scanf("%d", &rc);
    int a[rc][rc];

    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int secondary_diagonal_sum = 0;
    int primary_diagonal_sum = 0;

    for (int i = 0; i < rc; i++)
    {
        for (int j = 0; j < rc; j++)
        {
            if (i + j == rc - 1)
            {
                secondary_diagonal_sum += a[i][j];
            }
            if (i == j)
            {
                primary_diagonal_sum += a[i][j];
            }
        }
    }

    printf("%d", abs(primary_diagonal_sum-secondary_diagonal_sum));

    return 0;
}