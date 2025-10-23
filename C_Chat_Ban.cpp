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
    
    
    ll n,x;
    cin>>n>>x;
    ll k=n;
  
    ll line=0;
    if(x>((n*(n+1))/2)){
        line=n;
        ll mm=0;
        x-=((n*(n+1))/2);
        n--;
        ll lo=0,hi=n;
        ll tot=(n*(n+1))/2;
        if(tot<=x) {
            mm=n;

        }
        else 
        while(lo<=hi){
            ll mid=(lo+hi)/2;
            if(tot-((mid*(mid+1))/2)<x){
                mm=max(mm,min(n,(n-mid+1)));
                hi=mid-1;
            
            }
            else if(tot-((mid*(mid+1))/2)==x){
                mm=max(mm,(n-mid));
                break;
            }

            else lo=mid+1;
        }
       
        cout<<line+mm<<endl;
    

    
    }
    else {
        ll mm=0;
        ll lo=0,hi=n;
      // cout<<x<<endl;
        while(lo<=hi){
            ll mid=(lo+hi)/2;
           // cout<<mid<<' ';
          // cout<<(mid*(mid+1)/2)<<' '<<endl;
            if(((mid*(mid+1))/2)<x){
                mm=mid+1;
                lo=mid+1;
            }
            else  if(((mid*(mid+1))/2)==x){
                mm=max(mid,mm);
                break;
            }
            else hi=mid-1;
        }
        cout<<mm<<endl;
    }
    }
}
