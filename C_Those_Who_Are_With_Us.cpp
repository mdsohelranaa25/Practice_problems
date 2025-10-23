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
 ll n,m;
 ll mx=0;
 cin>>n>>m;
 vector<vector<ll>>v(n,vector<ll>(m));
 itr(i,n){
    itr(j,m){
        cin>>v[i][j];
        mx=max(mx,v[i][j]);
    }
 }
 map<ll,ll>row,col;

bool f=0;
set<ll>rw,cl;
itr(i,n){
    ll cnt=0;
    itr(j,m){
        if(v[i][j]==mx) {
            rw.insert(i);
            cl.insert(j);
           cnt++;
        }
    }
    row[i]=cnt;
    
}
itr(i,m){
    ll cnt=0;
    itr(j,n){
        if(v[j][i]==mx) cnt++;
    }
    col[i]=cnt;
}

ll rw2=-1;
ll cnt=0;
cerr<<n<<endl;
itr(i,n){
    //cerr<<row[i]<<' '<<i<<endl;
    if(row[i]>=2) {cnt++;
        rw2=i;
    }
   // if(row[i]) rowhave++;
}
//cerr<<mx<<endl;
//<<cnt<<endl;
if(cnt>=2) cout<<mx<<endl;
else if(cnt==1){
    
   itr(i,m){
    v[rw2][i]--;
   }
   cnt=0;
   itr(i,m){
    bool has=0;
    itr(j,n){
        if(v[j][i]==mx) {has=1;
            break;
        }


    }
    if(has) cnt++;
   }
   if(cnt>=2) cout<<mx<<endl;
   else cout<<mx-1<<endl;


}
else
{
    cnt=0;
    ll cl2=-1;
    itr(i,m) {
        if(col[i]>=2){
            cnt++;
            cl2=i;
        }
    }
    if(cnt>=2) cout<<mx<<endl;
   else if(cnt==1){
    itr(i,n){
        v[i][cl2]--;
    }
    cnt=0;
    itr(i,n){
        bool has=0;
        itr(j,m){
            if(v[i][j]==mx) {
                has=2;
        break;
            }

        }
        if(has) cnt++;
    }
    if(cnt>=2) cout<<mx<<endl;
    else cout<<mx-1<<endl;
   }
  else if(rw.size()>2||cl.size()>2) cout<<mx<<endl;
  else cout<<mx-1<<endl;


}



  }
  }
  

