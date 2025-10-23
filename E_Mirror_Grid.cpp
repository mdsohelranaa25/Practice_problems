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
    
    ll n;
    cin>>n;
    vector<vector<ll>>v(n,vector<ll>(n,0));
    itr(i,n){
      
        itr(j,n){
            char ch;
         cin>>ch;
         //   cout<<ch<<' ';

            v[i][j]=ch-'0';
           
        }
    }
   
    ll cnt=0;
    for(int i=0;i<n/2;i++){
       for(int j=i;j<(n-1-i);j++){
        ll one=0,zero=0;
        (v[i][j])?one++:zero++;
        (v[n-j-1][i])?one++:zero++;
        (v[j][n-i-1])?one++:zero++;
        (v[n-i-1][n-j-1])?one++:zero++;
        // cout<<i<<' '<<j<<' '<<min(one,zero)<<' ';
       // cout<<(v[n-i-1][n-j-1])<<(v[j][n-i-1])<<(v[n-j-1][i])<<v[i][j]<<endl;
        cnt+=min(one,zero);
        // if(i==0&&j==1) {
           // cout<<n-j-1<<' '<<n-1-i<<endl;
        //}
        }

    }
    cout<<cnt<<endl;
    
    
    }
    }
    
