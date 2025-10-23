#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char ch[n + 1];
    scanf("%s", ch);

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (ch[i] == 'V') {
            count += 5;
        } else if (ch[i] == 'W') {
            count += 2;
        } else if (ch[i] == 'X' && i != n - 1) {
            i++;
        } else if (ch[i] == 'Y' && i != n - 1) {
            ch[n++] = ch[i + 1];
            i++;
        } else if (ch[i] == 'Z' && i != n - 1) {
            if (ch[i + 1] == 'V') {
                count /= 5;
                i++;
            } else if (ch[i + 1] == 'W') {
                count /= 2;
                i++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
