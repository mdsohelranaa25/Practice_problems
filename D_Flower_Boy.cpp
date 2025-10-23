// 		/*
// 			//! In The Name Of Allah
				
// 					~~Sohel~~
				
				
// 		*/                                                                                                                                                  
//     #include<bits/stdc++.h>
//     using namespace std;
//     #define tt int t;cin>>t;while(t--)
//     #define itr(i,a) for(int i=0;i<a;i++)
//     #define ittr(i,bg,a) for(int i=bg;i<a;i++)
//     #define yes cout<<"YES"<<endl
//     #define no cout<<"NO"<<endl
//     #define ll long long
//     #define endd cout<<endl
//     #define vc(v, n) vector<ll> v(n)  
//     #define srt(v) sort(v.begin(), v.end())
//     #define rsrt(v) sort(v.rbegin(), v.rend())
//     #define MOD 1000000007
//     #define f first
//     #define sc second
//     int main(){
//       ios::sync_with_stdio(false);
//         cin.tie(nullptr);
//     tt{
//     ll n,m;
//     cin>>n>>m;
//     vc(v,n);
//     vc(vv,n);
//     vc(a,n);
//     vc(b,m);
//     itr(i,n) {cin>>v[i];
//         a[i]=v[i];
//     }
//     itr(i,m) {cin>>vv[i];
//         b[i]=vv[i];
//     }
//     srt(a);
//     srt(b);
//     ll need=0;
//     ll c=0;
//     ll i=n-1,j=m-1;
//     while(i>=0&&j>=0){
//         if(a[i]<b[j]){
//             c++;
//             //cout<<b[j]<<' ';
//             j--;
            
            
//         }
//         else{
//             j--;
//             i--;
            
//         }
        

        
//     } //cout<<"c="<<c<<' ';
//     if(c>1) cout<<-1<<endl;
//     else {

//     //     i=0,j=0;
//     //     ll cnt=0,lind=-1;
//     //     while(i<n&&j<m) {
            
//     //         if(v[i]>=vv[j]){
//     //         j++;
//     //         cnt++;
//     //         lind=i;
//     //     }
//     //     i++;
//     // }

//     // if(j==m) cout<<0<<endl;
//     // else{
//        bool f=0;
//     ll i=n-1,j=m-1;
//     ll count=0,lastind1=-1,lastind2=-1;
//     while(i>=0&&j>=0){
//         if(vv[j]<=v[i]){
//             count++;
//             j--;
//             lastind1=i;
//         }
//         i--;
//     }
//     if(j<0) {cout<<0<<endl;
//         continue;
//     }
//     else{
//     i=lastind1-1;
//     lastind2=j;
//     j--;
//     while(i>=0&&j>=0){
//         if(vv[j]<=v[i]){
//             count++;
//             j--;
//             lastind1=i;
//         }
//         i--;
        
//     }
//     vector<ll>ans;
//     if(j<0){
//         ans.push_back(vv[lastind2]);
//     }
//          i=n-1,j=m-2;
//      count=0,lastind1=-1,lastind2=-1;
//         while(i>=0&&j>=0){
//             if(vv[j]<=v[i]){
//                 count++;
//                 j--;
//                 lastind1=i;
//             }
//             i--;
//         }
//         if(j>=0&&ans.empty()) cout<<-1<<endl;
//         else{
        
//             ll lo=0,hi=INT_MAX;
//             ll an=INT_MAX;
//             while(lo<=hi){
//               ll mid=(lo+hi)/2;
//               i=0;
//               bool f=0;
//               j=0;
//               while(i<n&&j<m){
//                   if(vv[j]<=mid&&f==0){
//                       f=1;
//                       j++;
//                   }
//                   else if(vv[j]<=v[i]){
//                       i++;
//                       j++;
//                   }
//                   else i++;
                 
//                 }
              
//               if(j==m) {
//                   an=min(an,mid);
//                   hi=mid-1;
  
//               }
//               else lo=mid+1;
  
  
            
            
//         }
//         //cout<<an<<endl;
//   ans.push_back(an);
        
//         srt(ans);
//         cout<<ans[0]<<endl;

//     }
// }
       
//     }
//     }
//     }

    

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
    
    
    ll n,m;
    cin>>n>>m;
    vc(v,n+5);
    vc(vv,m+5);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=m;i++) cin>>vv[i];
    vc(suf,n+5);
    vc(pre,n+5);
    suf[n+1]=0;
    pre[0]=0;
    int x=1;
  for(int i=1;i<=n;i++){
    if(v[i]>=vv[x]){
        x++;
        pre[i]=pre[i-1]+1;
    }
    else pre[i]=pre[i-1];
  }
    x=m;
  for(int i=n;i>=0;i--){
    if(v[i]>=vv[x]){
        x--;
        suf[i]=suf[i+1]+1;
    }
    else suf[i]=suf[i+1];
  }
if(pre[n]>=m||suf[1]>=m) {
    cout<<0<<endl;
    continue;
}
  ll ans=INT_MAX;
  for(int i=0;i<=n;i++){
    if((pre[i]+suf[i+1])>=m){
        ans=0;
    }
   else if((pre[i]+1+suf[i+1])>=m) ans=min(ans,vv[pre[i]+1]);
  
  }
  if(ans==INT_MAX) cout<<-1<<endl;
  else cout<<ans<<endl;

    }
    }
    

