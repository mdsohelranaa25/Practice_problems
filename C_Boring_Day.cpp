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
    #define MOD 1000000007
    #define f first
    #define sc second
    #define endl '\n'
    int main(){
      ios::sync_with_stdio(false);
        cin.tie(nullptr);
    tt{
    ll n,l,r;
    cin>>n>>l>>r;
    vc(v,n) ;
    itr(i,n) cin>>v[i];
    ll lind=0;
    ll cnt=0,sum=0;
    ll i=0;
    while(i<n){
        if(v[i]>r){
            sum=0;
            lind=i+1;

        }
        else if(v[i]>=l&&v[i]<=r){
            sum=0;
            cnt++;
            lind=i+1;
        }
       else  if(sum+v[i]>=l&&sum+v[i]<=r){
            cnt++;
            sum=0;
            lind=i+1;
            
        }
        else if(sum+v[i]>r){
            ll ab=sum+v[i];
            while(ab>r&&lind<=i){
                ab-=v[lind];
                lind++;
                
            }
            sum=ab;
            if(ab>=l&&ab<=r) {
                cnt++;
                lind=i+1;
                sum=0;
            }
        }
        else if(sum+v[i]<r){
            sum+=v[i];
          
        }
        i++;
        
    }

    cout<<cnt<<endl;
    
    
    
    }
    }
    
