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
   ll n,r,avg;
   cin>>n>>r>>avg;
   ll need=avg*n;
   ll have=0;
   vector<pair<ll,ll>>pr;
   itr(i,n){
    ll a,b;
    cin>>a>>b;

    
    have+=a;
    if(a!=r) pr.push_back({b,a});
   }
   if(have>=need) cout<<0<<endl;
   else {
    ll rem=need-have;
    srt(pr);
    ll to_wrt=0;
    itr(i,pr.size()){
        if(rem==0) break;
        else {
           ll aa=min(rem,(r-pr[i].sc));
            rem-=aa;
            to_wrt+=aa*pr[i].f;
        }
    }
    cout<<to_wrt<<endl;
    
    
   }

    }
    
