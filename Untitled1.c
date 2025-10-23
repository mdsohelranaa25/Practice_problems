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

    string s;
    string ss="";
    cin>>s;
    ll small=0,capi=0;
    ll i=s.length()-1;
    while(i>=0){

        if(s[i]=='B'){
            capi++;
        }
        else if(s[i]=='b') small++;
        else if(s[i]>='a'&&s[i]<='z'&& small>0) small--;
        else if(s[i]>='A'&&s[i]<='Z'&&capi>0) capi--;
        else ss+=s[i];



        }
       cout<<ss;
        endd;
    }
    }


