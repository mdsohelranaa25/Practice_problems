#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n1, n2, max, lcm;

        scanf("%lld %lld", &n1, &n2);

        max = (n1 > n2) ? n1 : n2;

        lcm = max;

        while ((lcm % n1 != 0) || (lcm % n2 != 0)) {
            lcm += max;
        }

        printf("%lld\n", lcm);
    }

    
}
