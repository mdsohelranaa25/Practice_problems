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
    cin>>s;
    ll i=0;
    while(i<s.length()){
        if(s[i]=='B'){
            ll j=i-1;
            while(j>=0&&!(s[j]>='A'&&s[j]<='Z')) j--;
            if(j>=0) { s.erase(s.begin()+j);
                i--;
            }
            s.erase(s.begin()+i);
            i--;
        }
        else if(s[i]=='b'){
            ll j=i-1;
            while (j >= 0 && !(s[j] >= 'a' && s[j] <= 'z')) j--;
            if(j>=0) { s.erase(s.begin()+j);
                i--;
            }
            s.erase(s.begin()+i);
            i--;

        }
        else i++;
    } cout<<s;
    // itr(i,s.length()){ if(s[i]!='b'&&s[i]!='B') cout<<s[i];}
  
    endd;
    }
    }
    
