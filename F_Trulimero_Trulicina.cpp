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
    
    
    ll n,m,k;
    cin>>n>>m>>k;
    if(m%k==0){
        ll mm=1;
        for(int j=0;j<n;j++){
            mm=1;
            for(int i=0;i<m;i++){
                if(mm>k)mm=1;
                cout<<mm%(k+1)<<" ";
                mm++;
            }
            endd;
            mm=2;
            j++;

            if(j<n){
            for(int i=0;i<m;i++){
                if(mm>k)mm=1;
                cout<<mm%(k+1)<<" ";
                mm++;

            }
            endd;
        }
        }
        
    }
        else{
            ll mm=1;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(mm>k)mm=1;
                    cout<<mm%(k+1)<<" ";
                    mm++;
                }
                endd;
            }
            

        }
    
    
    }
    }
    
