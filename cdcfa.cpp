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
    ll i=0;
    ll cnt=0;
    ll j=0;
    while(j<n){
        i=j;
        
        ll mm=0;
        // set<ll>st;
        map<ll,ll>mp;
        map<ll,ll>mpp;
        while(mp[v[i]]<1&&i<n) {
            if(mm>0){
                if(abs(v[i]-v[i-1])==1){mm++ ;
            mp[v[i]]++;
            i++;
           
                }
                else break;
        }
        else {
            mm++ ;
            mp[v[i]]++;
            i++;
        }
    }
        i--;
        mm--;
       ll ff=mm;
        while(mpp[v[i]]<1&&i<n){
            if(mm>ff){
                if(abs(v[i]-v[i-1])==1){mm++ ;
            mpp[v[i]]++;
            i++;
           
                }
                else break;
        }
        else {
            mm++ ;
            mpp[v[i]]++;
            i++;
        }
           
        }
      
        cnt+=(mm-1);
       j++;
        // cout<<cnt<<" ";
        
    }
    cout<<cnt<<endl;
    
    
    
    }
    }
    
