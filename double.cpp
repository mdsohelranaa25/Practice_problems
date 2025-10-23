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
  ll n;
ll dp[100000][3] , vis[100000][3];
  ll fun(ll idx , ll pre){
    if(idx == n + 1){
        return 1;
    }
    if(dp[idx][pre] != -1){
        return dp[idx][pre];
    }
    ll ret = 0;
    if(pre == 0){
        ret += (fun(idx + 1 , 1));
    }
    else{
        ret += fun(idx + 1 , 1);
        // ret %= MOD;
        ret += fun(idx + 1 , 0);
        
        
    }
    ret %= MOD;

    return dp[idx][pre] = ret;

  }
  
  
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    cin >> n;
    memset(dp , -1 , sizeof(dp));
    cout << fun(1 , -1)  << endl;



  }
  
  
