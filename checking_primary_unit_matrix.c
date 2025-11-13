#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (r != c)
    {
        printf("This is not even a square matrix.\n");
        return 0;
    }

    bool is_unit = true;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    is_unit = false;
                    printf("Not a Primary Unit Matrix\n");
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    is_unit = false;
                    printf("Not even a diagonal Matrix\n");
                }
            }
        }
    }

    if (is_unit == true)
    {
        printf("A Primary Unit Matrix\n");
    }
    else
    {
        printf("Not a Primary Unit Matrix\n");
    }

    return 0;
}
