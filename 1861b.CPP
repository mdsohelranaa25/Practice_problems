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
    
    string s,ss;
    cin>>s>>ss;
    if(s==ss) yes;
    else {
        ll n=s.length();
        ll i=1,j=n-2;
        bool f=1;
        bool ff=1;
        ll find=-1;
        while(i<j){
            if(s[i]!=ss[i]) {
                ff=0;
                break;

            }
            else if(s[i]=='1'){
                find=i;
                ff=0;
                break;
            }
            i++;
        }
        // while(i<j&&f){

        //     // if(s[i]==s[j]&&ss[i]==ss[j]&&s[i]==ss[i]){
        //     //     yes;
        //     // }
        //     if(s[j]=='0'&&ss[j]=='0'){
        //         yes;
        //         break;

        //     }

        // }
        ll lind=-1;
        while(i<j){
            if(s[j]!=ss[j]){
                f=0;
                break;
            }
            else if(s[j]=='0'){
                lind=j;
                f=0;
                break;
            }
            j--;
        }
       if(find!=-1||lind!=-1) yes;
       else {
        bool fl=0;
        for(int l=0;l<=i;l++){
            if(s[l]==ss[l])
            for(int m=j;m<n;m++){
                if(s[m]==ss[m]&&s[m]==s[l]){
                    fl=1;
                    break;

                }
            
            }
            if(fl) break;
        }
        if(fl) yes;
        else {
            stack<ll>zind,oind;
            
            for(int l=i;l<j;l++){
                if(s[l]==ss[l]&&s[l]=='1') oind.push(l);
                if(s[l]==ss[l]&&s[l]=='0'){

                    zind.push(l);

                }

            }
            while(oind.top()<zind.top()&&!zind.empty()){
                zind.pop();

            }
            if(zind.empty()) no;
            else {
                ll lo=zind.top(),hi=oind.top();
                bool fff=1;
                for(ll l=lo;l<=hi;l++){
                    if(s[l]!=ss[l]){
                        fff=0;
                        break;
                    }
                }
                if(fff) yes;
                else no;
            }
        }

       }

    }
    
    
    }
    }
    
