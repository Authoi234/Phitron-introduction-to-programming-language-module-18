#include<stdio.h>

void printNum(int i, int n){    
    if (i > n)
    {
        return;
    }
    printf("%d\n", i);
    printNum(i+1, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    printNum(1, n);
    return 0;
}