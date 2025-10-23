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
    ll a=0,b=0,c=0;
ll i=0,j=n-1;
while(v[i]==v[0]&&i<n){
    a++;
    i++;
}
while(v[j]==v[n-1]&&j>=i){
    j--;
    b++;
}
if(v[0]==v[n-1]) cout<<n-(a+b)<<endl;
else cout<<n-max(a,b)<<endl;

    
    
    }
    }
    
