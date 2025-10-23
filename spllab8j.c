#include <stdio.h>
#include <string.h>

int main() {
    int freq[26] = {0};
    char c;

    while ((c = getchar()) != '\n' && c != EOF) {
        if (c >= 'a' && c <= 'z') {
            freq[c - 'a']++;
        }
    }

    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (freq[ch - 'a'] > 0) {
            printf("%c : %d\n", ch, freq[ch - 'a']);
        }
    }

    return 0;
}
