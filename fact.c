#include <stdio.h>

struct sub {
    int phy;
    int chem;
    int math;
    char name[30];
};

int main() {
    struct sub s[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter Name & Marks of Phy Chem and Math of %dth Person :\n", i+1);
        scanf("%s%d%d%d", s[i].name, &s[i].phy, &s[i].chem, &s[i].math);

    }
    printf("Name\t Physics\t chemistry\t math\t avg\n");
    for (int i = 0; i < 5; i++) {
       printf("%s\t %d\t\t %d\t\t %d\t %.2f\n", s[i].name, s[i].phy, s[i].chem, s[i].math, (float)(s[i].phy + s[i].chem + s[i].math) / 3);
    }

    return 0;
}
