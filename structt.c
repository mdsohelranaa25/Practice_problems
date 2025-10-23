#include <stdio.h>

struct sub {
    int phy;
    int chem;
    int math;
    char name[30];
};
 int bbl_sort(struct sub s[],int n){
    struct sub temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int total1 = s[j].phy + s[j].chem + s[j].math;
            int total2 = s[j + 1].phy + s[j + 1].chem + s[j + 1].math;

            if (total1 < total2) {  
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

 }
int main() {

    struct sub s[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter Name & Marks of Phy Chem and Math of %dth Person :\n", i+1);
        scanf("%s%d%d%d", s[i].name, &s[i].phy, &s[i].chem, &s[i].math);

    }
 bbl_sort(s,5);

    printf("Name\t Physics\t chemistry\t math\t avg\n");
    for (int i = 0; i < 5; i++) {
       printf("%s\t %d\t\t %d\t\t %d\t %.2f\n", s[i].name, s[i].phy, s[i].chem, s[i].math, (float)(s[i].phy + s[i].chem + s[i].math) / 3);
    }

    return 0;
}
