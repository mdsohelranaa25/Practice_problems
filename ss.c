#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    // int a[n];
    double sum = 0, ans, x;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &x);
        sum += x;
    }
    ans = sum / n;
    printf("%lf\n", ans);
    return 0;
}