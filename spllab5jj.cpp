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
   
  ll n;
  cin>>n;
  vector<pair<ll,ll>>pr;
  itr(i,n){
    ll a,b;
    cin>>a>>b;
    pr.push_back({a,b});
  }
  ll q;
  cin>>q;
  vc(v,q);
  itr(i,q) cin>>v[i];
  srt(pr);
  for(int i=0;i<q;i++){
    ll mm=v[i];
    ll cnt=0;
    for(int j=0;j<n;j++){
        if(pr[j].f<=mm&&pr[j].sc>=mm)cnt++;
        else if(pr[j].f>mm) break;
    }
    cout<<cnt<<endl;
  

  
    }
    
    }