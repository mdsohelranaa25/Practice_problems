#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n); 
        
        int a[n];
        int freq[21] = {0};
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            freq[a[i]]++;
        }
        
        int score = 0;
        for (int i = 1; i <= 20; i++) {
            score += freq[i] / 2; 
        }
        
        printf("%d\n", score); 
    }
    
    return 0;
}
