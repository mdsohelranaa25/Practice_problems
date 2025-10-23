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
 
// ll n;
// cin>>n;
// ll pr=-1,add=3;
// ll strt=0;
// vector<vector<ll>>v(n,vector<ll>(n));
//  if(n==2){
//         cout<<0<<' '<<1<<endl;
//         cout<<2<<' '<<3<<endl;
        
//     }
//     else{
// for(int i=1;i<n;i++){
//     pr++;
//     strt=pr*pr-1;
//     ll cnt=0;
//     ll add=1;
   
//     for(int j=1;j<n;j++){
// //cerr<<pr<<' '<<strt<<' '<<add<<' '<<j<<endl;
//         cnt++;
//         if(cnt>(pr+1)){
            
//             strt+=add;
//             add+=2;
//             v[i][j]=strt;
           
            
//         }
//         else{
//             add+=2;
//             strt++;
//             v[i][j]=strt;
            


//         }
//          //cerr<<j<<' '<<add<<' '<<v[i][j]<<endl;

//     }
 

// }

// ll c=(n-1)*(n-1);

// for(int i=1;i<n;i++){
//     v[0][i]=c;
//     c++;
   
// }
// for(int i=0;i<n;i++){
//     v[i][0]=c;
//     c++;
// }
//    itr(i,n) {
//         itr(j,n){
//             cout<<v[i][j]<<' ';
//         }
//         endd;
//     }
// }
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

  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  tt{
    ll n;
  cin >> n;

    vector<vector<int>> mat(n, vector<int>(n, -1));
    int x = n / 2, y = n / 2;
    if (n % 2 == 0) {
        x = n / 2 - 1;
        y = n / 2 - 1;
    }

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int dir = 0, step = 1, count = 0;
    mat[x][y] = count++;

    while (count < n * n) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < step; j++) {
                x += dx[dir];
                y += dy[dir];
                if (x >= 0 && x < n && y >= 0 && y < n)
                    mat[x][y] = count++;
            }
            dir = (dir + 1) % 4;
        }
        step++;
    }

    for (auto &row : mat) {
        for (auto val : row)
            cout << val <<' ';
        cout << endl;
    }

  }
  }
  


