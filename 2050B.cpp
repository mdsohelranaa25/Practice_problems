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
    ll sum=0,avg;
    itr(i,n) {cin>>v[i]; sum+=v[i];
    }

    if(sum%n!=0) no;
    else {
        avg=sum/n;
       for(int i=1;i<n-1;i++){
        ll pl=v[i-1]-avg;
        v[i-1]=avg;
        v[i+1]+=pl;
       }
    
     bool f=1;
     itr(i,n){
        if(v[i]!=avg) {
            no;
        
            f=0;
            break;
        }
     }
     if(f) yes;
    }
    }
}
    
