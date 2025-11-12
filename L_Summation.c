#include<stdio.h>

void sum(long long int *summation, long long int a[], int n, int i){
    if (i == n)
    {
        return;
    }
    
    *summation = *summation + a[i];
    sum(&summation, a, n, i+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int summation = 0;
    sum(&summation, a,n, 0);
    printf("%lld", summation);
    return 0;
}
