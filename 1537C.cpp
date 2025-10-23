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
        map<ll,ll>mp;
        set<ll>st;
        itr(i,n) {cin>>v[i]; mp[v[i]]++;
            st.insert(v[i]);
        }
        srt(v);
       
        ll m=-1;
      
        // for(auto &it:st){
        //     if(mp[it]>=2){
        //         m=it;
        //         mp[it]-=1;
        //         break;
        //     }
        // }
        if(n==2) cout<<v[0]<<" "<<v[1]<<endl;
        // else if(m!=-1)
        // {
        //     cout<<m<<" ";
        //     auto mm=upper_bound(v.begin(),v.end(),m);
        //     ll ind=mm-v.begin();
        //     for(int i=ind;i<n;i++){
        //         cout<<v[i]<<" ";
        //     }
        //     for(int i=0;i<ind-1;i++) cout<<v[i]<<" ";
        //     endd;



        // }
        else {

            ll ind;
            ll cnt=INT_MAX;
           ll mm;
            for(int i=0;i<n-1;i++){
                if((v[i+1]-v[i])<cnt){
                    mm=v[i+1]-v[i];
                    //cnt=v[i+1]-v[i];
                   // if(i+1<n-1||mm==0){
                    ind=i+1;
                    cnt=mm;
                   // }
                   // else ind=i;
                    if(cnt==0) break;
                     //if(ind==0&&abs(v[ind]-v[n-1])>abs(v[ind]-v[1])) ind++;
                    

                }

            }
            for(int i=ind;i<n;i++) cout<<v[i]<<" ";
            for(int i=0;i<ind;i++) cout<<v[i]<<" ";
            endd;

        }
    
    
    
    }
    }
    
    
