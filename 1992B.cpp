#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long arr[k];
        long long sum = 0;
        int tot=0;
        for(long long i = 0; i < k; i++){
            cin >> arr[i];
            sum += arr[i];
            tot+=arr[i]-1;
        }
        sort(arr, arr + k);
        // long long count = 0;
        // for(long long i = 0; i < k - 1; i++){
        //     count += arr[i] - 1;
        // }
        //count += (sum - arr[k - 1]);
        tot-=(arr[k-1]-1);
        tot+=sum-(arr[k-1]);
        cout << tot<< endl;
    }
}
