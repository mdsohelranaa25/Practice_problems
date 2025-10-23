// #include <stdio.h>

// int fibTail(int n, int a, int b) {
//     if (n <=1)
//         return a;
//     return fibTail(n - 1, b, a + b);
// }

// int main() {
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
    
//     int result = fibTail(n, 0, 1);
//     printf("The %d-th Fibonacci number is: %d\n", n, result);
//     return 0;
// }

#include <stdio.h>

int fibTail(int n, int a, int b) {
    if (n <= 1)
        return a;
    return fibTail(n - 1, b, a + b);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
    int result = fibTail(i, 0, 1);
    printf("%d ",result);
    }
    return 0;
}
