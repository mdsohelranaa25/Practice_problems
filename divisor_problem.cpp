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
    const ll N=1e6+9;
    ll spf[N];
    int main(){
      ios::sync_with_stdio(false);
        cin.tie(nullptr);
    tt{
    
    for(ll i=2;i<N;i++)
    spf[i]=i;
    for(ll i=2;i<N;i++){
        for( ll j=i;j<=N;j+=i){
            spf[j]=min(spf[j],i);
        }

    }
ll x;
cin>>x;
ll k=x;
vector<ll>tot;
ll distincprime=0;
ll sumofdivisors=1;
ll numofdivisors=1;
ll gpf=1;
ll total_prime_factors=0;
while(x>1){

    ll m=spf[x];
    distincprime++;
    gpf=max(gpf,m);
    ll topw=0;
    ll primepow=1;
    while(x%m==0){
    x/=m;
    total_prime_factors++;
    topw++;
    primepow*=m;
    }
    numofdivisors*=(topw+1);
    sumofdivisors*=(primepow*m-1)/(m-1);

}
cout<<spf[k]<<' '<<gpf<<' '<<distincprime<<' '<<total_prime_factors<<' ';
cout<<numofdivisors<<' '<<sumofdivisors<<endl;

    
    }
    }
    
