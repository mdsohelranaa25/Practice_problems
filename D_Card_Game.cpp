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
#define rev(s) reverse(s.begin(),s.end())
ll cnt_div[N]={0};
  int main(){
    ios::sync_with_stdio(false);
      cin.tie(nullptr);
    // sieve();
   // divis();
  tt{
 ll n;
 cin>>n;
 char ch;
 cin>>ch;
vector<string>v;
vector<string>trump;
itr(i,2*n){
    string s;
    cin>>s;
   // cerr<<s[0]<<' '<<ch<<endl;
    if(s[1]==ch){
    reverse(s.begin(),s.end());
        trump.push_back(s);
    }
    else{

          reverse(s.begin(),s.end());
        v.push_back(s);
    }
 
}
srt(v);
srt(trump);
ll j=0,i=0;
n=v.size();
ll m=trump.size();
vector<string>final;
bool f=0;
ll cnt=0;
string ss;

if(v.size()){
 ss=v[0];
rev(ss);
cnt=1;
final.push_back(ss);
}

for(int i=1;i<n;i++){
    if((v[i][0]==v[i-1][0])||cnt%2==0){
        cnt++;
        ss=v[i];
        rev(ss);
        final.push_back(ss);
    }
    else if(cnt%2){
        if(j<trump.size()){
            i--;
            ss=trump[j];
            j++;
            rev(ss);
            cnt++;
            //cerr<<ss<<endl;
             final.push_back(ss);

        }
        else {f=1;
        break;}
    }
    
}
while(j<trump.size()){
     ss=trump[j];
            j++;
            rev(ss);
            cnt++;
             final.push_back(ss);
}
if(cnt%2) f=1;
if(f) cout<<"IMPOSSIBLE"<<endl;
else  {
    for(int i=0;i<final.size();i++){
        cout<<final[i]<<' '<<final[i+1]<<endl;
        i++;
    }
}


  }

  

  }