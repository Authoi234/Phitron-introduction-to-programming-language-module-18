#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long int a[n];
    long long int ans_arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    
    int x = 0;
    int i = 0;
    int j = n - 1;
    
    while (i < j) {
        ans_arr[x] = a[i];
        ans_arr[x + 1] = a[j];
        i++;
        j--;
        x += 2;
    }

    if (i == j) {
        ans_arr[x] = a[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%lld ", ans_arr[i]);
    }
    
    return 0;
}