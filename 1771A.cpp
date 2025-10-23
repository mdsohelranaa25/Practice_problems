#include <bits/stdc++.h>
using namespace std;
#define in long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        in n;
        cin >> n;
        const int N = 1e5 + 5;
        in a[N];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a + n);
         if(a[0] == a[n - 1]){
            printf("%lld\n", (1LL * n * (n - 1LL)));
            continue;
        }
        in count = 0, c = 0;
        in l = a[0], h = a[n - 1];
        int aa = 0;
        while (a[aa] == l) {
            count++;
            aa++;
        }
        int mm = n - 1;
        while (a[mm] == h) {
            c++;
            mm--;
        }
        cout << c * count * 2LL << endl;
    }
}
