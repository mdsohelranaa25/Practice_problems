// /*
//   //! In The Name Of Allah




// */
// #include <bits/stdc++.h>
// using namespace std;
// #define tt  \
//   int t;    \
//   cin >> t; \
//   while (t--)
// #define itr(i, a) for (int i = 0; i < a; i++)
// #define ittr(i, bg, a) for (int i = bg; i < a; i++)
// #define yes cout << "YES" << endl
// #define no cout << "NO" << endl
// #define ll long long
// #define endd cout << endl
// #define vc(v, n) vector<ll> v(n)
// #define srt(v) sort(v.begin(), v.end())
// #define rsrt(v) sort(v.rbegin(), v.rend())
// #define pb(a, x) a.push_back(x)
// #define MOD 1000000007
// #define f first
// #define sc second
// #define endl '\n'
// const int N = 1e6 + 1;
// vector<bool> isprime(N, false);
// vector<ll> primes;


// void solve()
// {
// ll n;
// cin>>n;
// string s;
// cin>>s;
// ll cnt=0;
// itr(i,n) if(s[i]=='0') cnt++;
// if(n%2==1&&s[n/2]=='0'){
      
//         if(cnt>1) cout<<"ALICE"<<endl;
//         else cout<<"BOB"<<endl;
//     }
//     else{
//     cout<<"BOB"<<endl;
//     }


  

// }
// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//   // sieve();
//   // divis();
//   tt
//   {
//     solve();
//   }
// }
/*
  //! In The Name Of Allah




*/
#include <bits/stdc++.h>
using namespace std;
#define tt  \
  int t;    \
  cin >> t; \
  while (t--)
#define itr(i, a) for (int i = 0; i < a; i++)
#define ittr(i, bg, a) for (int i = bg; i < a; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define endd cout << endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb(a, x) a.push_back(x)
#define MOD 1000000007
#define f first
#define sc second
#define endl '\n'
const int N = 1e6 + 1;
vector<bool> isprime(N, false);
vector<ll> primes;

ll tss=0;
void solve()
{
    tss++;
ll n;
cin>>n;
string s;
cin>>s;
ll cnt=0;
//if(tss==609)cout<<s<<endl;

itr(i,n) if(s[i]=='0') cnt++;
//<<cnt<<endl;
ll i=0,j=n-1;
ll need=0;
while(i<j){
    if(s[i]!=s[j]){
        
        s[i]=s[j]='1';
       
        need++;
        
    }
    i++;
    j--;
}
//cerr<<cnt<<endl;


if(need>2) cout<<"ALICE"<<endl;
else if(need==0){
if(n%2==1&&s[n/2]=='0'){
      //cerr<<"H"<<endl;
        if(cnt>1) cout<<"ALICE"<<endl;
        else cout<<"BOB"<<endl;
    }
    else{
    cout<<"BOB"<<endl;
    }
    //cerr<<"H"<<endl;
}
else{
   // cerr<<cnt<<endl;
   ll alice=0,bob=0;
    if(n%2==1&&s[n/2]=='0') {alice++;
        cnt--;
    }
    ll baki=cnt-need;
    bob=need;
    if(baki%2) bob++;
    
    else if(baki>0) bob+=2;
     if(alice==bob) cout<<"DRAW"<<endl;
    else cout<<"ALICE"<<endl;
   // cerr<<need<<' '<< ' '<<cnt<<endl;
    //cerr<<baki<<endl;
    
  
}








  

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  tt
  {
    solve();
  }
}
