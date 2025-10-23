/*
	//! In The Name Of Allah
		~~Sohel~~
*/
#include<bits/stdc++.h>
using namespace std;
#define tt int t;cin>>t;while(t--)
#define itr(i,a) for(int i=0;i<a;i++)
#define ittr(i,bg,a) for(int i=bg;i<a;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long
#define endd cout<<endl
#define vc(v, n) vector<ll> v(n)  
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define MOD 1000000007
#define f first
#define sc second

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    tt {
        ll n, x;
        cin >> n >> x;
        vc(v, n);
        map<ll,ll> mp;
        set<ll> hs;
        
        itr(i,n) {
            cin >> v[i];

            mp[v[i]]++;
            hs.insert(v[i]);
            
        }
        map<ll,ll>mpp;
      
        bool f=0;
        itr(i,2*n){
            if(f) break;
            

            if(mp[i]!=0){
                ll cnt=mp[i]-1;
                mpp[i%x]+=cnt;
            }

           else {
           
            if(mpp[i%x]>0){
           
                mpp[i%x]--;
            }
            else {
                cout<<i<<endl;
                f=1;
                
            }
        }
        }
            }
        }
    

