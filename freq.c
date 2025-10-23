#include<stdio.h>
#include<string.h>

int main() {
    char freq[26] = {0};
    char name[10000001];
    fgets(name, sizeof(name), stdin);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] >= 'a' && name[i] <= 'z') {
            freq[name[i] - 'a']++;
        }
    }

    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (freq[ch - 'a'] > 0) {
            printf("%c : %d\n", ch, freq[ch - 'a']);
        }
    }

    return 0;
}
