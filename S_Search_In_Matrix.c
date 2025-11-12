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
    int flag=0,query;
    scanf("%d", &query);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == query)
            {
                flag = 1;
            }

        }
    }

    if (flag == 1)
    {
        printf("will not take number");
    }
    if (flag == 0)
    {
        printf("will take number");
    }

    return 0;
}