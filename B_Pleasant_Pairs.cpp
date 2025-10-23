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
vector<pair<ll,ll>>pr;
  itr(i,n) {
    ll x;
    cin>>x;
    pr.push_back({x,i+1});
}
srt(pr);
ll cnt=0;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if((pr[i].f*pr[j].f)==(pr[i].sc+pr[j].sc)) cnt++;
        else if((pr[i].f*pr[j].f)>2*n) break;
    }
}
cout<<cnt<<endl;
    }
    }
    
