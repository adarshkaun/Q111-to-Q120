#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[10000];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    printf("%d\n", arr[k - 1]);
    return 0;
}
