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
    
    
    string s;
    cin>>s;
    ll n=s.length();
    ll cnt=0;
    vector<vector<char>>v(n);
    itr(i,n){
        if(s[i]=='('){
            v[cnt].push_back(s[i]);
            cnt++;
        }
        else {
            v[cnt].push_back(s[i]);
            cnt--;

        }
    }
    cnt=0;
    bool f=0;
    itr(i,n){
        srt(v[i]);
        ll m=v[i].size();
    //     ll j=0;
        
    //     if(f){
    //     while(j<m){

    //             if(j<m-1){

    //                 cout<<v[i][m-1-j]<<v[i][j];
    //                 if(v[i][j]=='(') f=1;
    //                 else f=0;
        
    //                 }
    //                 else {cout<<v[i][j]; if( v[i][j]=='(') 
    //                     f=1;
    //                     else f=0;
                    
    //                 }
                   
    //                 j++;

    //         } 
            
    // } 
    // else {
    //     while(j<m){
    //         if(j<m-1-j){
    //         cout<<v[i][j]<<v[i][m-1];
    //         if(v[i][m-1]=='(') f=1;
    //         else f=0;

    //         }
    //         else {cout<<v[i][j]; if( v[i][j]=='(') 
    //             f=1;
    //             else f=0;
            
    //         }
        
    //         m--;
    //         j++;
    //     }

    while(cnt&&m>=1){
        cout<<v[i][m-1];
        if(v[i][m-1]==')') cnt--;
        else cnt++;
        m--;
      }
      ll j=0;
      while(j<m-1-j){
        cout<<v[i][j]<<v[i][m-1-j];
        if(v[i][m-1-j]=='(') cnt++;
        else cnt--;
        if(v[i][j]==')')cnt--;
        else cnt++;
        j++;
      }
      


    }

        
        endd;
        itr(i,n){
            for(auto &it:v[i]){
                cout<<it;
            }
            endd;
        }
      
    }
    
    
    
