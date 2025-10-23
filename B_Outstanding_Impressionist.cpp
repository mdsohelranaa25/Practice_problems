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
    string s(n,'1');
    ll left[n],right[n];
    ll prf[2*n+10]={0};
    map<ll,vector<ll>>mp;
    itr(i,n){
        cin>>left[i]>>right[i];
        if(left[i]==right[i]){
            prf[left[i]]=1;
            mp[left[i]].push_back(i);


        }
    }
    for(ll i=1;i<2*n+10;i++) prf[i]+=prf[i-1];

    itr(i,n){
        if(left[i]==right[i]){
            if(mp[left[i]].size()!=1){
                s[i]='0';
                //cout<<mp[left[i]].size()<<endl;
                
            }
        }
        else {
            ll mn=prf[right[i]]-prf[left[i]-1];
            ll mm=right[i]-left[i]+1;
            if(mm==mn) s[i]='0';
           // cout<<mn<<endl;
        }
    }
    cout<<s<<endl;
    
    
    
    }
    }
    
