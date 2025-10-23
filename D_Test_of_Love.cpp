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
    
    ll n,jmp,mx;
    cin>>n>>jmp>>mx;
    string s;
    cin>>s;
    ll i=0;
    // while(i<n){
    //   ll cnt=0;
    //   while(s[i]=='L') i++;
    //   if(s[i]=='W'){
    //     while(s[i]=='W'){
    //       i++;
    //       cnt++;
    //     }
    //     cnt++;
    //     if(s[i]=='L'){
    //       if(jmp>=cnt) i++;
    //       else {
    //         mx-=(cnt-jmp);
    //         i++;
    //       }
    //       if(mx<0) break;
          
    //     }

    //     else if(s[i]=='C'){
    //       ll mm=0;
          
    //       while(s[i]!='L'){
    //         if(s[i]=='C'){
    //           mm++;
    //           cnt+=mm;
    //         }
    //         else mm++;
    //         i++;

    //       }
    //       if(jmp>=cnt) i++;
    //       else {
    //         mx-=(cnt-jmp);
    //         i++;
    //       }
    //       if(mx<0) break;
          
    //     }

    //   }
    // }
    // if(mx<0) no;
    // else yes;
    

    i=n-1;
    ll cnt=0;
    while(i>=0){
      cnt=0;
      if(s[i]=='C'){
        cnt=0;
       while(i>=0&&s[i]!='L'){
        cnt++;
        i--;
       }
       if(cnt>=jmp){
        mx=-1;
        break;
       }

      }
      else if(s[i]=='W'){
        cnt=0;
        while(i>=0&&s[i]=='W'){
          i--;
          cnt++;
        }
        ll mm=cnt;
        if(s[i]=='C'){
          while(i>=0&&s[i]!='L'){
            cnt++;
            i--;
            
           }
           if(cnt<jmp){
           i--;
           }
           else if((cnt-mm+1)>jmp){
            mx=-1;
            cnt=0;
            mm=0;
            break;
           }
           else {
            cnt-=jmp;
            mx-=cnt;
            mx--;

            i--;
            cnt=0;
            mm=0;
           }
          
        }
        else {
          if(jmp>mm) i--;
          else {
            mm-=jmp;
            mm++;
            mx-=mm;
          }
        }
      } while(i>=0&&s[i]=='L') i--;
    }
  if(mx>=0) yes;
  else no;
    }
    }
    
