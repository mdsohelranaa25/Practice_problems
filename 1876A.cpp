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
    ll n,pp;
    cin>>n>>pp;
    vc(v,n);
    itr(i,n) cin>>v[i];
    vc(vv,n);
    itr(i,n) cin>>vv[i];
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    itr(i,n){
      pq.push({vv[i],v[i]});
    }
    ll cnt=0;
    ll resident=0;
    resident++;
      cnt+=pp;
    bool f=1;
    while(f&&resident<n){
      
      if(resident+pq.top().sc<=n&&pq.top().f<=pp){
      resident+=pq.top().sc;
      cnt+=(pq.top().sc)*pq.top().f;
      }
      else {
        if(pq.top().f<=pp){
        ll m=n-resident;
        resident=n;
        cnt+=pq.top().f*m;
        f=0;
        break;
        }
        else {
          ll m=n-resident;
          resident=n;
          cnt+=pp*m;
          f=0;
          break;
        }
      }
      pq.pop();
      if(resident==n) {
        f=0;
      }
    }
    cout<<cnt<<endl;
    
    
    }
    }
    
