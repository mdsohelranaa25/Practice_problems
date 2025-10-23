#include <stdio.h>
#include <string.h>

int main() {
    char ch[1000001];
    fgets(ch, sizeof(ch), stdin);

    int start = 0, end = 0;
    int len = strlen(ch);

    if (ch[len - 1] == '\n') {
        ch[len - 1] = '\0';
        len--;
    }

    char result[1000001];
    int pos = 0;

    while (end <= len) {
        if (ch[end] == ' ' || ch[end] == '\0') {
            for (int i = end - 1; i >= start; i--) {
                result[pos++] = ch[i];
            }
            if (ch[end] == ' ') {
                result[pos++] = ' ';
            }
            start = end + 1;
        }
        end++;
    }

    result[pos] = '\0';
    printf("%s\n", result);

    return 0;
}
