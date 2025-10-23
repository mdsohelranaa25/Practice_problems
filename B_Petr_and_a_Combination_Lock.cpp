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
   
    bool ifsubs(vector<ll>&v,ll n,ll tot,ll sum){
     // cout<<tot<<" ";
       if((2*tot-sum)%360==0&&sum!=abs(tot)) return true;
       else if(tot==sum/2) return true;
       if(n==v.size()) return false;
      
         return ifsubs(v,n+1,tot+v[n],sum)||ifsubs(v,n+1,tot,sum);
    }
    int main(){
      ios::sync_with_stdio(false);
        cin.tie(nullptr);
    ll n;
    cin>>n;
    vc(v,n);
    itr(i,n)cin>>v[i];
    ll sum=0;
    itr(i,n) sum+=v[i];
    if(sum%360==0){
    yes;
    }
    else if(sum%2) no;
    else {
        bool f=ifsubs(v,0,0,sum);

        if(f) yes;
        else no;
    }
    
    
    }
    
    
