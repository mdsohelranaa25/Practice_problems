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
  #define fff first
  #define sc second
#define endl '\n'


  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
  
  tt{
 ll n;
 cin>>n;
 vc(v,n);
 ll x;
 ll ev=0,od=0;
 itr(i,n){
    
    cin>>v[i];
    if(v[i]%2) od++;
    else ev++;
 }



     srt(v);
    set<ll>st;
    for(int i=0;i<n;i++){
        st.insert(v[i]);

    }
    if(st.size()==2){
        cout<<v[n-1]+1<<endl;

    }
    else{
        
ll j=2;

while(j<=1LL<<58){
    st.clear();
    for(int i=0;i<n;i++){
        st.insert(v[i]%j);
        if(st.size()>2) break;
    }

      
    if(st.size()==2) {
        cout<<j<<endl;
       break;
    }
    else j*=2;
    
  
   
   }
 }
        
    
 }
  
  }


