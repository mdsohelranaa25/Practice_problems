#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
   
    ll N = 1e7;  
    vector<bool> is_prime(N + 1, true);
    vector<ll> primes;

    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= N; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= N; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (ll i = 2; i <= N; i++) {
        if (is_prime[i]) primes.push_back(i);
    }
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    ll m=1;
    int i=0;
    
    while(primes[i]-m<n) i++;
    m=primes[i];
    ll o=m;
    while(primes[i]-o<n) i++;
    o=primes[i];
    cout<<m*o<<endl;


    
}
}