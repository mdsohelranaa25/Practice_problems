		/*
			//! In The Name Of Allah
				
			
				
				
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
#define pb(a,x) a.push_back(x)
#define MOD 1000000007
  #define f first
  #define sc second
#define endl '\n'
const int N=1e6+1;

vector<vector<ll>>adj(1e5);
vector<bool>vis(1e5,false);
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  tt{
    ll n;
    cin>>n;
 ll indeg[n]={0};
 itr(i,n){
    for(auto x:adj[i]) indeg[x]++;
 }
 queue<ll>q;
 for(int i=0;i<n;i++){
    if(indeg[i]==0){
        q.push(i);
    }
 }
 vector<ll>topo;
 while(!q.empty()){
    int node=q.front();
    q.pop();
    topo.push_back(node);
    for(auto x:adj[node]) {
        indeg[x]--;
        if(indeg[x]==0) q.push(x);
    }
 }

  }
  }
  

