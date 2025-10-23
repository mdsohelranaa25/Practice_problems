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
    ll sm=0;
    ll m=0;
    m=sqrt(n);
    m++;
    sm=m*m;
    m--;
    sm--;
    ll last=sm;
    sm-=m;
    if(sm<n){
        m+=2;
        sm=m*m;
        m--;
        sm--;
        last=sm;
        sm-=m;
    }
    ll rmv=sm-n;
    last-=rmv;
    cout<<last<<endl;
    
    
    }
    }
    
