#include<stdio.h>
#include<string.h>

int main() {
    char s[100005];
    scanf("%s", s);

    int freq[100] = {0};
    int len = strlen(s);

    for(int i = 0; i < len; i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            freq[s[i] - '0']++;
        }
    }

    for(int i = 0; i <= 9; i++) {
        printf("%d ", freq[i]);
    }

    return 0;
}
