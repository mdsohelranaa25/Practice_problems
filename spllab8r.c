#include<stdio.h>
#include<string.h>
int main(){
    char cc[200];
    char ch[200];
    scanf("%s%s", cc, ch);
    if (strlen(cc) != strlen(ch)) {
        printf("No");
        return 0;
    } else {
        int freq1[26] = {0};
        int freq2[26] = {0};
        int len = strlen(cc);
        for (int i = 0; ch[i]!='\0'; i++) {
            freq1[cc[i] - 'a']++;
            freq2[ch[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                printf("No");
                return 0;
            }
        }
        printf("Yes");
    }
}
