#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    char ch[500];
    fgets(ch, sizeof(ch), stdin);
    int i = 0, nn = 0;
    char cc[500];
    while (ch[i] != '\0' && ch[i] != '\n') {
        if(ch[i]==' ') cc[nn++]=' ';
        else if ((ch[i] - n) < 'a') {
            int temp = 'a' - (ch[i] - n);
            cc[nn++] = 'z' - temp + 1;
        } else {
            cc[nn++] = ch[i] - n;
        }
        i++;
    }
    cc[nn] = '\0';
    puts(cc);
}
