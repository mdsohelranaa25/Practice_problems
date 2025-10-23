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
    tt{
    
    
    ll n;
    cin>>n;
    vector<ll>pm;
    pm.push_back(0);
    ll arr[n][n];
    itr(i,n){
        itr(j,n){
            cin>>arr[i][j];

        }
    }
    vector<ll>vv;
    for(int i=0;i<n;i++){
        pm.push_back(arr[0][i]);
        vv.push_back(arr[0][i]);

    }
    for(int i=1;i<n;i++){
        pm.push_back(arr[i][n-1]);
        vv.push_back(arr[i][n-1]);
    }
    vv.push_back(INT_MAX);
    srt(vv);
    for(int i=0;i<2*n;i++){
        if(vv[i]!=i+1){
            pm[0]=i+1;
            break;
        }
    }
    for(auto &it:pm) cout<<it<<" ";
    endd;
    
    }
    }
    
