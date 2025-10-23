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
    ll sum=0,tw=0,three=0;
        itr(i,s.length()){
            if(s[i]=='2') tw++;
            else if(s[i]=='3') three++;
            sum+=s[i]-'0';
        }
        //tw+=3*three;
        if(sum%9==0) yes;
        
        else {
            ll rem=sum%9;
            rem=9-rem;
            bool f=1;
            ll cnt=0;
            while(rem<=(three*6+tw*2)){
                // if(rem%6&&three>0) {yes; f=0;break;
                // }
                // else if(rem==8&&(tw&&three)) {yes; f=0;break;
                // }
                // else if(rem==4&&tw>1) {yes;f=0;break;
                // }
                ll m=rem-(min((rem-rem%6),three*6));
                if(m%2==0&&m/2<=tw){
                    f=0;
                    yes;
                    break;
                }

                else rem+=9;
            }
            if(f==1) no;
        }
    
    
    }
    }
    
