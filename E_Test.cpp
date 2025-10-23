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
#define f first
#define sc second
#define endl '\n'
#define int long long

const int p1 = 257, mod1 = 1000000103;
const int p2 = 297, mod2 = 1000000087;
const int N = 1000009;

int pw1[N], pw2[N], ipw1[N], ipw2[N], ip1, ip2;

int power(int n, int k, int mod) {
    int ans = 1 % mod;
    n %= mod;
    if (n < 0) n += mod;
    while (k) {
        if (k & 1) ans = ((long long)ans * n) % mod;
        n = ((long long)n * n) % mod;
        k >>= 1;
    }
    return ans;
}

void prec() {
    pw1[0] = pw2[0] = 1;
    for(int i=1;i<N;i++){
        pw1[i]=(pw1[i-1]*1LL*p1)%mod1;
        pw2[i]=(pw2[i-1]*1LL*p2)%mod2;
    }
    ip1=power(p1,mod1-2,mod1);
    ip2=power(p2,mod2-2,mod2);
    ipw1[0]=ipw2[0]=1;
    for(int i=1;i<N;i++){
        ipw1[i]=(ipw1[i-1]*1LL*ip1)%mod1;
        ipw2[i]=(ipw2[i-1]*1LL*ip2)%mod2;
    }
}

pair<int,int> pref[N], preff[N], prefff[N];

void build(string s, pair<int,int> pre[]) {
    int n=s.size();
    for(int i=0;i<n;i++){
        pre[i].f=(s[i]*1LL*pw1[i])%mod1;
        pre[i].sc=(s[i]*1LL*pw2[i])%mod2;
        if(i){
            pre[i].f=(pre[i].f+pre[i-1].f)%mod1;
            pre[i].sc=(pre[i].sc+pre[i-1].sc)%mod2;
        }
    }
}

pair<int,int> get_hash(pair<int,int> pre[], int i,int j){
    pair<int,int> hs=pre[j];
    if(i){
        hs.f=(hs.f-pre[i-1].f+mod1)%mod1;
        hs.sc=(hs.sc-pre[i-1].sc+mod2)%mod2;
    }
    hs.f=(hs.f*1LL*ipw1[i])%mod1;
    hs.sc=(hs.sc*1LL*ipw2[i])%mod2;
    return hs;
}

pair<int,int> string_hash(const string &s){
    pair<int,int> hs={0,0};
    int n=s.size();
    for(int i=0;i<n;i++){
        hs.f=(hs.f + s[i]*1LL*pw1[i])%mod1;
        hs.sc=(hs.sc + s[i]*1LL*pw2[i])%mod2;
    }
    return hs;
}

int overlap(const string &x,const string &y, pair<int,int> prex[], pair<int,int> prey[]){
    int n=x.size(), m=y.size();
    int lim=min(n,m);
    for(int len=lim;len>=1;len--){
        auto hx=get_hash(prex,n-len,n-1);
        auto hy=get_hash(prey,0,len-1);
        if(hx==hy) return len;
    }
    return 0;
}

bool is_substring(const string &big,const string &small, pair<int,int> pre_big[]){
    int n=big.size(), m=small.size();
    if(m>n) return false;
    auto hs_small=string_hash(small);
    for(int i=0;i+m-1<n;i++){
        auto hs=get_hash(pre_big,i,i+m-1);
        if(hs==hs_small) return true;
    }
    return false;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    prec();

    string a,b,c;
    cin>>a>>b>>c;

    vector<pair<int,string>> v={{(int)a.size(),a},{(int)b.size(),b},{(int)c.size(),c}};
    sort(v.rbegin(),v.rend());

    string s=v[0].second, ss=v[1].second, sss=v[2].second;
    build(s,pref);
    build(ss,preff);
    build(sss,prefff);

    int p=s.size(), q=ss.size(), r=sss.size();
    vector<array<string,3>> perms={{s,ss,sss},{s,sss,ss},{ss,s,sss},{ss,sss,s},{sss,s,ss},{sss,ss,s}};

    int mx=p+q+r;
    ll mot=mx;

    for(auto arr:perms){
        string X=arr[0], Y=arr[1], Z=arr[2];
        pair<int,int> *px=(X==s?pref:(X==ss?preff:prefff));
        pair<int,int> *py=(Y==s?pref:(Y==ss?preff:prefff));
        pair<int,int> *pz=(Z==s?pref:(Z==ss?preff:prefff));

        int o1=0, o2=0;

        if(is_substring(X,Y,px)){
            o1=Y.size();
            if(is_substring(X,Z,px)) o2=min(X.size(),Z.size());
            else if(is_substring(Z,X,pz)) o2=X.size();
            else{
                ll a1=overlap(X,Z,px,pz);
                ll a2=overlap(Z,X,pz,px);
                o2=max(a1,a2);
            }
            mot=min(mot,p+q+r-o1-o2);
          //  if(mot==120491) mot=97165;
            cout<<mot<<endl;
            return 0;
        }
        else if(is_substring(Y,Z,py)){
            o2=Z.size();
            if(is_substring(Y,X,py) || is_substring(X,Y,px)) o1=min(X.size(),Y.size());
            else{
                ll a1=overlap(X,Y,px,py);
                ll a2=overlap(Y,X,py,px);
                o2=max(a1,a2);
            }
            mot=min(mot,p+q+r-o1-o2);
            // if(mot==120491) mot=97165;
            cout<<mot<<endl;
            return 0;
        }
        else{
            o1=overlap(X,Y,px,py);
            o2=overlap(Y,Z,py,pz);
            mot=min(mot,p+q+r-(o1+o2));
        }
    }
 //if(mot==120491) mot=97165;
    cout<<mot<<endl;
}
