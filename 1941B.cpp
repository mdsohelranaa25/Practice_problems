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

    vc(v,n);
    itr(i,n) cin>>v[i];
    
    ll i=1;
    bool flag=true;
    if(n<3){
        no;
        continue;
    }
    while(i<n-1){
       
        ll a,c;
        a=v[i-1];
        c=v[i+1];
        if(c<a||v[i]<a*2) {
            flag=false;
            break;
        }
        else {
            v[i]-=a*2;
            v[i-1]-=a;
            v[i+1]-=a;
           
        }
        i++;

    }
    i=1;  
     while(i<n-1){
        ll a,c;
        a=v[i-1];
        c=v[i+1];
        if(c<a||v[i]<a*2) {
            flag=false;
            break;
        }
        else {
            v[i]-=a*2;
            v[i-1]-=a;
            v[i+1]-=a;
           
        }
        i++;

    }

    
        itr(i,n){
            if(v[i]!=0) {
                flag=false;
                break;
            }
        }
    if(flag) yes;
    else no;
    
    }
    }
    
