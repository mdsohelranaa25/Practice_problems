#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t); 
    for (int tt = 1; tt <= t; tt++) {
       double r;
        scanf("%lf", &r);
        double circle_area = 2 * 3.1416 * r * r;
        double rect_area = 8 * r * r;
        double green_area = rect_area - circle_area;
        printf("Case %d: %.2lf\n", tt, green_area);
    }
    return 0;
}
