#include <stdio.h>

int countOnes(int n) {
    int count = 0;
    while (n > 0) {
        count += n % 2; 
        n /= 2;         
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N;
        scanf("%d", &N);

        int ones = countOnes(N); 

        int result = (1 << ones) - 1;

        printf("%d\n", result); 
    }

    return 0;
}
