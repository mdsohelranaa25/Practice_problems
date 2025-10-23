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
    
    ll n,m,k;
    cin>>n>>m>>k;
    vc(sir,m);
    vc(std,k);
    itr(i,m) cin>>sir[i];
    itr(i,k) cin>>std[i];
    srt(sir);
    itr(i,k){
      ll mm=std[i];
      if(mm<sir[0]){
        cout<<sir[0]-1<<endl;
      }
      else if(mm>sir[m-1]){
        cout<<(n-sir[m-1])<<endl;
      }
      else {
        auto a=lower_bound(sir.begin(),sir.end(),mm);
        auto b=upper_bound(sir.begin(),sir.end(),mm);
        int aa=a-sir.begin();
        cout<<(*b-sir[aa-1])/2<<endl;


      }
    }
    
    
    }
    }
    
