#include<bits/stdc++.h>
using namespace std;
#define tt int t; cin >> t; while(t--)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long
#define end cout<<endl

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    tt {
        int n;
        cin >> n;
        int arr[n];
        for (auto &it : arr) cin >> it;

        int plus = 0, minus = 0, total = 0;
        int i = 0, j = n - 1;

        while (i < n && arr[i] > 0) {  
            total += arr[i];  
            i++;
        }

        while (j >= 0 && arr[j] < 0) {  
            total += abs(arr[j]);  
            j--;
        }

        int minn= i;
        int maxx=j;

        while (i <= j) {  
            if (arr[i] > 0) plus += arr[i];
            i++;
        }

        while (j >= minn) {  
            if (arr[j] < 0) minus += abs(arr[j]);
            j--;
        }
        int aa=0;
        int c=0;
        for(int i=minn;i<=maxx;i++){
            if(arr[i]>=0){
                aa=max(aa,c);
                c=0;
                
            }
            else c+=abs(arr[i]);
        }
        int ab=0;
        

        int add = max(plus, minus);
        total += add;
        
        cout << total << endl;
    }
}
