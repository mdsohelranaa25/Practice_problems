#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        long long sum = 0;
        long long maxVal = -1;
        long long v[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%lld", &v[i]);
        }
        
        long long count = 0;
        int i = 0;
        while (i < n && v[i] == 0) {
            count++;
            i++;
        }
        
        for (; i < n; i++) {
            sum += v[i];
            if (maxVal < v[i]) maxVal = v[i];
            if (sum - maxVal == maxVal) count++;
        }
        
        printf("%lld\n", count);
    }
    return 0;
}
