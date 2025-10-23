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
    string s;
    cin>>s;
    map<char,ll>mp;
    itr(i,n) mp[s[i]]++;
    ll single=0;
    for(auto x:mp) if(x.sc%2) single++;
    if(single>2){
        cout<<-1<<endl;
        continue;
    }
    
    
    ll dlt=n;
    for(auto x:mp){
        char ch=x.f;
        ll i=0,j=n-1;
        ll cnt=0;
        while(i<j){
            if(s[i]==s[j]) {
                i++;
                j--;
            }
            else if(s[i]==ch){
                i++;
                cnt++;
            }
            else if(s[j]==ch){
                j--;
                cnt++;
            }
            else {
                cnt=n;
                break;
            }
        } 
        dlt=min(dlt,cnt);
        if(dlt==0) break;

    }
    if(dlt==n) cout<<-1<<endl;
    else cout<<dlt<<endl;
    }
    }
    
