#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    int arr[10000];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    printf("%d", total - sum);

    return 0;
}
