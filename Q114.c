#include <stdio.h>

int main() {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int len = 0;
    while (s[len] != '\0' && s[len] != '\n') len++;
    if (len == 0) { printf("0\n"); return 0; }
    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;
    int start = 0, maxlen = 0;
    for (int i = 0; i < len; i++) {
        unsigned char c = s[i];
        if (last[c] >= start) start = last[c] + 1;
        last[c] = i;
        int curr = i - start + 1;
        if (curr > maxlen) maxlen = curr;
    }
    printf("%d\n", maxlen);
    return 0;
}
