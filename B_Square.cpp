		/*
			//! In The Name Of Allah
				
					~~Sohel~~
				
				
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
    tt{
    
    ll a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    ll aa=0,bb=0;
//     aa=(pow((a-c),2)+pow((b-d),2));
//     bb=aa=(pow((a-e),2)+pow((b-f),2));
//     ll cc=aa=(pow((a-g),2)+pow((b-h),2));
// if(aa==bb||aa==cc) cout<<aa<<endl;
//    else if(bb==cc) cout<<bb<<endl;
//    else cout<<cc<<endl;
    if(a==c) aa=abs(b-d);
    else if(a==e) aa=abs(b-f);
    else aa=abs(b-h);
    cout<<aa*aa<<endl;

    }
    }
    
