#include <stdio.h>
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

    if (r == c)
    {
        printf("This is a square Matrix.\n");
    }
    else
    {
        printf("This is not a square Matrix.\n");
    }

    if (r == 1)
    {
        printf("This is a Row Matrix.\n");
    }
    if (c == 1)
    {
        printf("This is a Column Matrix.\n");
    }


    return 0;
}