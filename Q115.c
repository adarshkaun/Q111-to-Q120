#include <stdio.h>

int main() {
    char s[1000], t[1000];
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    int freq1[26] = {0}, freq2[26] = {0};

    int i = 0;
    while (s[i] != '\0' && s[i] != '\n') {
        freq1[s[i] - 'a']++;
        i++;
    }

    i = 0;
    while (t[i] != '\0' && t[i] != '\n') {
        freq2[t[i] - 'a']++;
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
