#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool flag = true;

      for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])==1 && a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                flag=false;
                break;
            }
            }
        

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}
