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

    bool is_scalar = true;
    int scalar_value = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i+j == r-1)
            {
                if (i == 0)
                {
                    scalar_value = a[i][j];
                }
                if (a[i][j] != scalar_value)
                {
                    is_scalar = false;
                    printf("Not a Scalar Matrix\n");
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    is_scalar = false;
                    printf("Not even a diagonal Matrix\n");
                }
            }
        }
    }

    if (is_scalar == true)
    {
        printf("A Scalar Matrix\n");
    }
    else
    {
        printf("Not a Scalar Matrix\n");
    }

    return 0;
}
