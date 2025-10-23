#include<bits/stdc++.h>
using namespace std;
 void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    
    }
    string s="";
    vector<int>freq(26,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<27;j++){
            if(freq[j]==arr[i]){
                freq[j]++;
                s+=char(j+'a');
                break;
            }
        }

    }
    cout<<s<<endl;
 }
 int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
 }