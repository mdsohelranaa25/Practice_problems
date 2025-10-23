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
    #define pb(x) push_back(x)
    #define f first
    #define sc second
   
    void sieve(ll n,vector<bool>&pr,vector<ll>&prime,vector<vector<ll>>&divisor){
        pr[1]=false;
        for( int i=2;i*i<=n;i++){
            if(pr[i]){
                prime.pb(i);

                for(ll j=i+i;j<=n;j+=i){

                    pr[j]=false;
                }
            }
            

        }

    }
    int main(){
      ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
    
        ll n;
        cin>>n;
        vector<bool>pr(2*n+2,1);
        vector<ll>prime;
        vector<vector<ll>>divisor(2*n+2);
        
        sieve(2*n,pr,prime,divisor);
        if(n>2)cout<<2<<endl;
        else cout<<1<<endl;
        for(int i=2;i<=n+1;i++){
            if(pr[i]) cout<<1<<" ";
            else cout<<2<<' ';
        }
        endd;
    
    //cout<<pr[4]<<endl;
    
    }
    
    
