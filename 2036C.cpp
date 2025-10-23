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
    ll n;
    ll cnt=0;
    set<ll>ind;
    itr(i,s.length()-3){
        if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='0'&&s[i+3]=='0'){
         ind.insert(i);
            cnt++;
            i+=3;
        }
    }
    cin>>n;

    while(n--){
        ll a;
        cin>>a;
        char  b;
        cin>>b;
        a--;
        if(s[a]!=b)
       for(int l = max(0LL, a - 3); l <= min(a, (ll)s.length()-4); l++){

        if(ind.find(l)!=ind.end()){
            cnt--;
            ind.erase(l);
            break;
    
    }
        }
        if(s[a]!=b){
            s[a]=b;
            for(int j = max(0LL, a - 3); j <= min(a + 3, (ll)s.length()-4); j++)
            {
                		
                if(s[j]=='1'&&s[j+1]=='1'&&s[j+2]=='0'&&s[j+3]=='0'){
                    ind.insert(j);
                       cnt=ind.size();
                       j+=3;break;

                   }

                
            }
        }
            cnt=ind.size();
         //cout<<cnt<<" ";         ;
        if(cnt) yes;
        else no;
        // for(auto &it:ind) cout<<it<<" ";
        // endd;
            

    }
}

    
    
    }
    
    
