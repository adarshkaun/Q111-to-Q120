#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100000];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_so_far = arr[0];
    int curr_sum = arr[0];

    for (int i = 1; i < n; i++) {
        if (curr_sum < 0)
            curr_sum = arr[i];
        else
            curr_sum += arr[i];

        if (curr_sum > max_so_far)
            max_so_far = curr_sum;
    }

    printf("%d\n", max_so_far);
    return 0;
}
