   /*       
		           
				     
 	 In the name of Allah                                                                                         
				         
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
      
ll n,m;
      cin>>n>>m;
      set<ll>str,stc;
      vector<vector<char>>v(n,vector<char>(m));
      itr(i,n){
          itr(j,m){
              cin>>v[i][j];
          }
      }
      bool f=1;
      ll i,j;
      i=0;
      while(i<n){
        j=0;
        while(j<m){
          if(f==0){
            break;
          }
          if(v[i][j]=='1'){
            bool flag=1,fl=1;
            for(int l=0;l<i;l++){
              if(v[l][j]=='0'){
                flag=0;
                break;
              }
            }
            for(int l=0;l<j;l++){
              if(v[i][l]=='0'){
                fl=0;
                break;
              }
            }
            if(flag==0&&fl==0){
              f=0;
              break;
            }

          }
          j++;

        }
        i++;
      }
      if(f) yes;
      else no;

      }
      }

