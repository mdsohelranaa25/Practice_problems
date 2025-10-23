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
  #define ll int
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
ll cnt_div[N]={0};
  int32_t main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
ll n,m;
cin>>n>>m;
ll startx=-1,starty=-1,endx=-1,endy=-1;
vector<vector<char>>v(n,vector<char>(m));
itr(i,n){
    itr(j,m){
        cin>>v[i][j];
        if(v[i][j]=='A') {
            startx=i,starty=j;
        }
        if(v[i][j]=='B') {
            endx=i,endy=j;
        }
    }
}
queue<pair<ll,ll>>q;
pair<ll,ll>parn[n][m];
for(ll i=0;i<n;i++){
    for(int j=0;j<m;j++){
        parn[i][j]={-1,-1};
    }
}
q.push({startx,starty});
while(!q.empty()){
    auto now=q.front();
    q.pop();
    ll x=now.first;
    ll y=now.sc;
    ll dx[4]={0,0,1,-1};
    ll dy[4]={1,-1,0,0};
    for(int i=0;i<4;i++){
        ll nx=x+dx[i];
        ll ny=y+dy[i];
        if(nx>=0&&nx<n&&ny>=0&&ny<m&&parn[nx][ny].f==-1&&v[nx][ny]!='#'){
            parn[nx][ny]={x,y};
            q.push({nx,ny});
        }

    }
}
    if(parn[endx][endy].f==-1) cout<<"NO"<<endl;
    else{
        yes;
       ll x=endx;
        ll y=endy;
        ll count=1;
        //cerr<<x<<' '<<y<<endl;
        vector<char>fin;
        while(!(x==startx&&y==starty)){
            
            ll nx=parn[x][y].first;
            ll ny=parn[x][y].sc;
           // cerr<<nx<<' '<<ny<<endl;
            if(x==nx){
                if(y<ny) fin.push_back('L');
                else fin.push_back('R');
            }
            else{
                if(x>nx) fin.push_back('D');
                else fin.push_back('U');
            }
            x=nx;
            y=ny;

        }
        cout<<fin.size()<<endl;
        reverse(fin.begin(),fin.end());
        for(auto x:fin) cout<<x;
    }
}
  

