#include <stdio.h>
#include <stdlib.h>

int manhattanDistanceFormula(int r1, int c1, int r2, int c2)
{
    return abs(r1 - r2) + abs(c1 - c2);
}

int main()
{
    int r = 5;
    int a[r][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int beautifulPositionXAndY = 2;

    int currentX = 2;
    int currentY = 2;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (a[i][j] != 0)
            {
                currentX = i;
                currentY = j;
            }
            
        }
    }

    int distanceToBeautifulPosition = manhattanDistanceFormula(beautifulPositionXAndY, beautifulPositionXAndY, currentX, currentY);

    printf("%d", distanceToBeautifulPosition);

    return 0;
}