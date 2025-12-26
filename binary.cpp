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


void solve()
{

    ll n;
    cin>>n;
    vc(v,n);
    itr(i,n) cin>>v[i];

    

    cout<<"Before sort"<<endl;
    for(auto x:v) cout<<x<< ' ';
    cout<<endl;

    /*
    bubble sort 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]) swap(v[i],v[j]);
        }
    }

    
   


    cout<<"After sort "<<endl;
    for(auto x:v) cout<<x<<' ';
    cout<<endl;

    */

    
    ll x;
    cin>>x;
    ll ind=-1;

    /*
    //linear search
    for(int i=0;i<n;i++) if(v[i]==x) ind=i;
    if(ind==-1) cout<<"Not found"<<endl;
    else cout<<"index is "<<ind+1<<endl;

    */

    // /*
     // binary
    srt(v);
    ll i=0,j=n-1;
    
    while(i<=j){
        ll mid=(i+j)/2;
        if(v[mid]>x) {
            j=mid-1;
        }
        else if(v[mid]<x){
            i=mid+1;
        }
        else{
            ind=mid;
            break;
        }
    }

    //*/
     if(ind==-1) cout<<"Not found"<<endl;
    else cout<<"index is "<<ind+1<<endl;
    



  

}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // sieve();
  // divis();
  //tt
  {
    solve();
  }
}
