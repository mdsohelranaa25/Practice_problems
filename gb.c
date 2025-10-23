#include<stdio.h>
#define MOD 1000000007
#define ll long long

long long power(ll n, ll m, ll mod) {
    if (m == 0) return 1; // Base case: n^0 = 1
    long long hf = power(n, m / 2, mod); // Recursive call
    hf = (hf * hf) % mod; // Combine results with MOD
    if (m % 2 == 1) hf = (hf * n) % mod; // If m is odd
    return hf; // Return result
}

int main() {
    ll n, m;
    scanf("%lld %lld", &n, &m); // Input
    n = n % MOD; // Take MOD of n to handle large numbers
    printf("%lld\n", power(n, m, MOD)); // Output result
    return 0;
}
