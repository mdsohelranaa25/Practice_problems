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
    vc(v,n);
    itr(i,n) cin>>v[i];
    srt(v);
    ll m=v[0];
 ll i=0;
 while(v[i]%m==0&&i<n) i++;
 ll mm=v[i];
 bool f=1;
 while(i<n&&f){
    if(v[i]%m!=0&&v[i]%mm!=0){
        f=0;
        
    }
    
    i++;

 }
 if(f) yes;
 else no;
    
    
    }
    }
    
