		/*
			//! In The Name Of Allah
				
					~~Sohel~~
				
				
		*/                                                                                                                                                  
    #include<bits/stdc++.h>
    using namespace std;
    #define tt int t;cin>>t;while(t--)
    #define itr(i,a) for(int i=0;i<a;i++)
    #define ittr(i,bg,a) for(int i=bg;i<a;i++)
    #define yes cout<<"Yes"<<endl
    #define no cout<<"No"<<endl
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
    tt{
    ll n;
    cin>>n;
    vc(v,n) ;
    itr(i,n) cin>>v[i];
    srt(v);
    ll cnt=0;
    ll count=0;
// unordered_map<ll,ll>mp;
//     bool f=0;
//     itr(i,n){
//         mp[v[i]]++;
//         if(mp[v[i]]>=4){
//             f=1;
//             break;
//         }
//     }
//     if(f) {yes;
//     continue;}
bool f=0;
    ll lin=-1,tot=0;
   itr(i,n){
    lin=i-1;
    tot=1;
    if(v[i]-1!=v[i-1])cnt=0;
    while(v[i]==v[i+1]){
        tot++;
        i++;
    }
    if(tot>=4) {
        f=1;
        break;
    }
    else if(tot>=2) cnt++;
    if(cnt>=2) {
        f=1;
        break;
    }
   }
   if(f) yes;
   else no;
    // ll mn=v[0],mx=v[n-1];
    // for(int i=mn;i<=mx;i++){
    //     if(mp[i]>=2) cnt++;
    //     if(cnt>=2){
    //         f=1;
    //         break;
    //     }
    //     else if(mp[i]==0) cnt=0;
    // }
    // if(f) yes;
    // else no;
    
    
    }
    }
    
