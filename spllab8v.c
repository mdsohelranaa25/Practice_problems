#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    char ch[n + 1];
    scanf("%s", ch);

    int count = 0;
    bool A = false, B = false, C = false;

    for (int i = 0; i < n; i++) {
        if (ch[i] == 'A' && !A) {
            count++;
            A = true;
        } else if (ch[i] == 'B' && !B) {
            count++;
            B = true;
        } else if (ch[i] == 'C' && !C) {
            count++;
            C = true;
        }

        if (count == 3) {
            printf("%d\n", i + 1);
            return 0;
        }
    }

    return 0;
}
