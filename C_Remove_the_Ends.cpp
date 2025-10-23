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
    ll mx=0,ans=0,i=0,j=n-1,k=0,l=0,cnp=0,cnn=0;
        while(i<=j&&v[i]>=0){
            ans+=v[i];
            i++;
            
        }
        while(v[j]<0&&j>=i){
            ans+=abs(v[j]);
            j--;
        }
        k=i,l=j;
        while(k<=l){
            if(v[k]>=0) ans+=v[k];
            k++;
        }
    
    mx=ans;
    
    while(j>=i){
        if(v[j]<0){
            cnn+=abs(v[j]);
        }
        else cnp+=v[j];
        ll dif=cnn-cnp;
        mx=max(mx,ans+dif);
        j--;
    }
    cout<<mx<<endl;
    
    }
    }
    
