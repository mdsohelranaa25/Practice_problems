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
    
    
    ll n,k,x;
    cin>>n>>k>>x;
    vc(v,n);
    ll sum=0,rem=0;
    stack<ll>st;
    itr(i,n){
      cin>>v[i];
      sum+=v[i];
      st.push(v[i]);


    }
    ll need=0;
    if(x>sum){
      need+=(x/sum)*n;
      rem=x%sum;
      while(rem>0){
        rem-=st.top();
        st.pop();
        need++;
      }
      ll tot=n*k;
      cout<<max(0LL,tot-need+1)<<endl;
    }
    else {
      rem=x;
       need=0;
      while(rem>0){
        rem-=st.top();
        st.pop();
        need++;

      }
      ll tot=n*k;
      cout<<max(0LL,tot-need+1)<<endl;
    }
    
    }
    }
    
