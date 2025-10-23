#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count[26] = {0};
    char c;

    for (int i = 0; i < n; i++) {
        scanf(" %c", &c);
        count[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        while (count[i]--) {
            putchar(i + 'a');
        }
    }

    putchar('\n');
    return 0;
}
