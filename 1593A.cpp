#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        long long a[3];
        long long maxValue = 0;

        for (int i = 0; i < 3; i++) {
            cin >> a[i];
            if (a[i] > maxValue) maxValue = a[i];
        }

        if (a[0] == a[1] && a[1] == a[2]) {
            cout << "1 1 1" << endl;
        } else {
            bool flag=true;
             if(a[0]==maxValue&&a[1]==maxValue||a[0]==maxValue&&a[2]==maxValue||a[2]==maxValue&&a[1]==maxValue) flag=false;
            for (int i = 0; i < 3; i++) {
               
                if (a[i] == maxValue) {
                    if(flag)
                    cout << 0 << " "; else cout<<1 <<" ";
                }
                else 
                    cout << maxValue - a[i] + 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
