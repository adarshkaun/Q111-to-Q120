#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        i++;
    }

    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - 32;

    printf("%s", s);
    return 0;
}
