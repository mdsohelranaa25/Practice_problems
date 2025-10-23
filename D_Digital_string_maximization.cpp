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
    string s;
    cin>>s;
    
    ll nn=s.length();
    itr(i,nn){
        ll m=-1,n=-1,d,dd=-1,ind=-1;
        m=s[i]-'0';
        d=9-m;
        for(int j=i+1;j<=min((i+d),nn-1);j++){
            if(s[j]!=0){
            n=s[j]-'0'-j+i;
            if(n>dd){
                dd=n;
                ind=j;

            }
        }

        }
        if(dd>m){
            ll cnt=0;
            for(int j=ind;j>i;j--){
                swap((s[j]),s[j-1]);
                cnt++;
                
            }
            s[i]-=cnt;
            
        }

        
    }
    cout<<s<<endl;
    
    
    
    }
    }
    
