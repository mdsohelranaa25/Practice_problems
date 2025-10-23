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
    
    
    ll n,k;
    cin>>n>>k;
    
     if(n!=1&&k>1) no;
    else {
        if(n==1){
            if(k==2) yes;
            else no;
        }
        else {
            bool f=0;
           if(n==2||n==3) f=0;
           else if(n==4) f=1;
           else if(n%2==0||n%3==0) f=1;
           else {
            for(int i=5;i*i<=n;i+=6){
                if(n%i==0||n%(i+2)==0){
                    f=1;
                    break;
                }
            }
           }
                
            
            if(f) no;
            else yes;
        }
    }
    
    }
    }
    
