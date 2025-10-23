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
        ll cc=1;
    tt{
    
    ll n;
    cin>>n;
    ll a=-1,b=-1;
    ll sq=sqrt(n);
    if(sq*sq==n){
        if(sq%2){
            a=1;
            b=sq;
        } 
        else {
            a=sq;
            b=1;
        }
    } else {
        sq++;
        if(sq%2){
            ll m=sq-1;
            m=m*m;
            ll need=n-m;
            if(need<=sq){
                a=sq;
                b=need;
            }else {
                b=sq;
                m=sq*sq;
                a=(m-n+1);
            }
        }
        else {

            ll m=sq-1;
            m=m*m;
            ll need=n-m;
            if(need<=sq){
                b=sq;
                a=need;
            }else {
                a=sq;
                m=sq*sq;
                b=(m-n+1);
            }
        }
       
    }
    cout<<"Case "<<cc++<<": "<<a<<' '<<b<<endl;

    
    
    }
    }
    
