// 		/*
// 			//! In The Name Of Allah
				
			
				
				
// 		*/                                                                                                                                                  
//   #include<bits/stdc++.h>
//   using namespace std;
//   #define tt int t;cin>>t;while(t--)
//   #define itr(i,a) for(int i=0;i<a;i++)
// #define ittr(i,bg,a) for(int i=bg;i<a;i++)
//   #define yes cout<<"YES"<<endl
//   #define no cout<<"NO"<<endl
//   #define ll long long
//   #define endd cout<<endl
//   #define vc(v, n) vector<ll> v(n)  
//   #define srt(v) sort(v.begin(), v.end())
// #define rsrt(v) sort(v.rbegin(), v.rend())
// #define pb(a,x) a.push_back(x)
// #define MOD 1000000007
//   #define f first
//   #define sc second
// #define endl '\n'
// const int N=1e6+1;
// vector<bool>isprime(N,false);
// vector<ll>primes;
// ll cnt_div[N]={0};
// vector<ll>divisor[N];
// void divis(){
// for(int i=1;i<=N;i++){
// for(int j=i;j<=N;j+=i){
// cnt_div[j]++;
// divisor[j].push_back(i);
// //if(i/j!=i) divisor[j].push_back(i/j);
// }
// }

// }
// void sieve(){
// isprime[1]=false;
// isprime[2]=true;
// pb(primes,2);
// for(int i=3;i*i<=N;i+=2) isprime[i]=true;
// for(int i=3;i<=N;i+=2){
// if(isprime[i]){
// pb(primes,i);
// for(int j=i*i;j<=N;j+=i){
// isprime[j]=false;
// }
// }
// }
// }

//   int main(){
//     ios::sync_with_stdio(false);
//       cin.tie(nullptr);
//     // sieve();
//    // divis();
//   tt{
//     ll n,k;
//     cin>>n>>k;
//     vc(v,n);
//     itr(i,n) cin>>v[i];
//     vector<ll>occ(k+1);
//     vector<ll>ans(n);
//     vector<ll>suf(n+5);
//       map<ll,ll>mp,mpp;
//       vector<pair<ll,ll>>pr;
//     itr(i,n){
//         mpp[v[i]]++;
//         suf[i]=mpp[v[i]];
//         pr.push_back({suf[i],i});
//     }mp.clear();
//     rsrt(pr);
  
//     ll lo=0,hi=n;
//     vector<ll>final(n);
//     while(lo<=hi){
       
//         bool f=0;
//         ll mid=(lo+hi)/2;
//      //   cerr<<endl<<mid<<' '<<"mid"<<endl;
//       ll cur=k;
//       int i=0;
//     while(i<n){
     
//       //cerr<<endl<<"I "<<i<<endl;
//         if(occ[cur]==mid)cur--;
//         if(cur==0) break;
//      //  cerr<<"cur "<<occ[cur]<<' '<<cur<<' '<<pr[i].f<<' '<<pr[i].sc<<' ';
//         if(pr[i].f>cur) {i++; continue;
//         }
//         else if(final[pr[i].sc]!=0) {
//           i++;
//           continue;
//         }
//        else if(pr[i].f==cur&&final[pr[i].sc]==0){
//      //  cerr<<i<<' ';
//         //   cerr<<"YE1 "<<endl;
//             final[pr[i].sc]=cur;
//             occ[cur]++;
//             i++;
//         }
//         else {
//           bool ass=0;
//          // cerr<<"Hey "<<i<<' ';
//           for(int j=i;j<n;j++){if(pr[j].f<cur&&mpp[v[pr[j].sc]]<cur){
//           final[pr[j].sc]=cur;
//           //cerr<<"Dhur mc "<<j<<' ';
//                occ[cur]++;
//             //   cerr<<cur<<' '<<occ[cur]<<endl;
//           ass=1;
//           break;

//         }
//         }
//         if(ass==0) i++;
//         // else i--;
//         // i=max(0,i);
//       }

          
      
            
//           }
         
        


//     bool ff=0;
//     for(int i=1;i<=k;i++){
//         if(occ[i]<mid){ f=1; break;}
//         else if(occ[i]>mid) {
          
//           ll cc=occ[i]-mid;
//           for(int j=0;j<n;j++) if(cc&&final[j]==i){
//             cc--;
//             final[j]=0;
//             if(cc==0) break;

//           }
//         }
      
//     }
  
   
//     if(f==1){
//         hi=mid-1;
//        final = vector<ll>(n, 0);
// occ = vector<ll>(k + 1, 0);
// mp.clear();

//     }
//     else{
      
//         ans=final;
       
//         final = vector<ll>(n, 0);
// occ = vector<ll>(k + 1, 0);
// mp.clear();

//         lo=mid+1;

//     }
//     }
//     itr(i,n) cout<<ans[i]<<' ';
//     endd;
 

//   }
//   }
  
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
#define pb(a,x) a.push_back(x)
#define MOD 1000000007
  #define f first
  #define sc second
#define endl '\n'
const int N=1e6+1;
vector<bool>isprime(N,false);
vector<ll>primes;
ll cnt_div[N]={0};
vector<ll>divisor[N];
void divis(){
for(int i=1;i<=N;i++){
for(int j=i;j<=N;j+=i){
cnt_div[j]++;
divisor[j].push_back(i);
//if(i/j!=i) divisor[j].push_back(i/j);
}
}

}
void sieve(){
isprime[1]=false;
isprime[2]=true;
pb(primes,2);
for(int i=3;i*i<=N;i+=2) isprime[i]=true;
for(int i=3;i<=N;i+=2){
if(isprime[i]){
pb(primes,i);
for(int j=i*i;j<=N;j+=i){
isprime[j]=false;
}
}
}
}
 set<ll>st;
 ll n,k;
  vc(final,n+5);
 map<ll,vector<ll>>mp;
bool f(int mid){
ll cnt=0;
vector<ll>rm;
for(auto x:st){
  if(mp[x].size()>=k){
    cnt++;
    ll nn=1;
    for(int i=0;i<mp[x].size();i++){
      ll ind=mp[x][i];
      if(nn>k) final[ind]=0;
      else {
        final[ind]=nn;
        nn++;
        
      }

    }

  }
  else{
  for(int i=0;i<mp[x].size();i++) rm.push_back(mp[x][i]);
  }
}
if(cnt+(rm.size()/k)<mid) return false;
else{
  ll cur=1;
  ll baki=mid-cnt;
  itr(i,baki*k){
    final[rm[i]]=cur;
    cur++;
    if(cur>k) cur=1;

  }
  return true;
}
}

  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  tt{

 cin>>n>>k;
 vc(v,n);
 itr(i,n){
  cin>>v[i];
 }
st.clear();
mp.clear();
 itr(i,n){
  st.insert(v[i]);
 mp[v[i]].push_back(i);
 }
 ll lo=0,hi=n;

 vc(ans,n+5);
 while(lo<=hi){
  final=vector<ll>(n,0);
  ll mid=(lo+hi)/2;
  if(f(mid)){
    lo=mid+1;
    ans=final;
  
    
  }
  else hi=mid-1;

 }
 itr(i,n) cout<<ans[i]<<' ';
 endd;

  }
  }
  


