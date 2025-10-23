  /*    
  ! In The Name Of Allah
    
        ~~SOHEL~~
 
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
#define MOD 1000000007
#define f first
#define sc second
int main(){
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
string s;
cin>>s;
ll cnt=0;

ll i=0;
ll mn=1;
bool f=0;
while(i<s.length()){
//     if(mn<1)
// cout<<string(2*(cnt+mn),' ');
cout<<string(2*cnt,' ');
if(s[i+1]!='/'){
cout<<s[i]<<s[i+1]<<s[i+2]<<endl;

i+=3;
if(s[i+1]=='/'){
    if(f) cnt--;
    else f=1;
}
else { if(f==0) cnt++;
    else f=0;
}

}
else {
cout<<s[i]<<s[i+1]<<s[i+2]<<s[i+3]<<endl;


i+=4;
if(s[i+1]=='/') {if(f) cnt--;
    else f=1;
}
else {
    if(!f) cnt++;
    else f=0;
}

}



}




}

