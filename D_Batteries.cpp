/*
    //! In The Name Of Allah




*/
#include <bits/stdc++.h>
using namespace std;
#define tt    \
    int t;    \
    cin >> t; \
    while (t--)
#define itr(i, a) for (int i = 0; i < a; i++)
#define ittr(i, bg, a) for (int i = bg; i < a; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll int
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
bool f = 0;
ll qq(ll i, ll j)
{

    cout << i << ' ' << j << endl;
    cout.flush();
    ll x;
    cin >> x;
    if (x == -1)
        exit(0);
    if (x == 1)
        f = 1;
    return x;
}
void solve(vector<ll> v)
{
    if (f)
        return;
    if (v.size() <= 1)
        return;
    ll n = v.size();
    ll mid = n / 2;
    vector<int> left(v.begin(), v.begin() + mid);
    vector<int> right(v.begin() + mid, v.end());
    if (left.size() >= 2)
    {
        if (f == 0)
            solve(left);
    }
    if (right.size() >= 2)
    {
        if (f == 0)
            solve(right);
    }
    for (auto i : left)
    {
        if (f)
            return;
        for (auto j : right)
        {
            if (f)
                return;
            ll res = qq(i, j);
            if (res == 1)
            {
                // cout<<"ye"<<endl;
                f = 1;
                return;
            }
        }
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
        f = 0;

        ll n;
        cin >> n;
        for (int i = 1; i < n; i++)
        {
            if (f)
                break;
            for (int j = 1; j + i <= n; j++)
            {
                if (f)
                    break;
                ll x = qq(j, j + i);
                if (x == 1)
                {
                    f = 1;
                    break;
                }
            }
        }
    }
}
