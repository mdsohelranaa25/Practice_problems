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
#define enddd cout << endl
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
    cin >> n;

    priority_queue<ll> startt; 
    priority_queue<ll, vector<ll>, greater<ll>> endd; 
    priority_queue<ll> sstartt; 
    priority_queue<ll, vector<ll>, greater<ll>> eendd; 

    map<ll,ll> mp, mpp;
ll i=0;
    while(i<n)
    {
        i++;

        //cout<<n<<endl;
        char ch;
        ll a, b;
       
        cin >> ch >> a >> b;
         if(ch=='+'){

            startt.push(a);
            endd.push(b);
            }
        
        else
        {
            mp[a]++;
            mpp[b]++;
        }

        while(!startt.empty() && mp[startt.top()] > 0)
        {
            mp[startt.top()]--;
            startt.pop();
        }

        while(!endd.empty() && mpp[endd.top()] > 0)
        {
            mpp[endd.top()]--;
            endd.pop();
        }
        // if(!startt.empty())
        // cerr<<i<<' '<<startt.top()<<' '<<endd.top()<<endl;
       
            if(!startt.empty() && !endd.empty())
            {
                if(startt.top() > endd.top())
                    yes;
                else
                    no;
            }
            else
            {
          
                no;
            }
           
    }
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

/*
12
+ 1 2
+ 3 4
+ 2 3
+ 2 2
+ 3 4
- 3 4
- 3 4
- 1 2
+ 3 4
- 2 2
- 2 3
- 3 4
*/