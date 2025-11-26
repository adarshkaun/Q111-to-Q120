#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;
    int arr[10000];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    if (scanf("%d", &k) != 1) return 0;
    if (k > n || k <= 0) { printf("\n"); return 0; }
    int q[10000], front = 0, back = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) q[++back] = i;
        if (i >= k - 1) {
            while (front <= back && q[front] < i - k + 1) front++;
            if (front <= back) printf("%d", arr[q[front]]);
            else printf("0");
            if (i - k + 1 != n - k) printf(" ");
        }
    }
    printf("\n");
    return 0;
}
