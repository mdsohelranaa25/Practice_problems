#include<bits/stdc++.h>
using namespace std;
#define tt int t;cin>>t;while(t--)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long
#define end cout<<endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    tt {
        string s;
        cin >> s;
        int count = INT_MAX, count1 = INT_MAX, count2 = INT_MAX;
        int minn = -1, mm = -1;
        bool flag1 = 0, flag2 = 0, flag3 = 0;

      int temp;
      temp=0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '5') { 
                minn = i; 
                break;
            }
           
            temp++;
        }

        if (minn != -1) {
            
            for (int i = minn - 1; i >= 0; i--) {
                if (s[i] == '2' || s[i] == '7') { 
                    flag1 = 1;
                    break;
                }
               
                temp++;
            }
            if (flag1) count = temp;
        }

        
        minn = -1;
        int temp1 = 0, temp2 = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '0') { 
                minn = i;
                break;
            }
            else if(s[i]!='0')
            temp1++;
            temp2++;
        }

        if (minn != -1) {
           
            
         
            for (int i = minn - 1; i >= 0; i--) {
                if (s[i] == '5') { 
                    flag2 = 1;
                    break;
                }
              
                temp1++;
            }
            if (flag2) count1 = temp1;

          
            for (int i = minn - 1; i >= 0; i--) {
                if (s[i] == '0') { 
                    mm = i;
                    flag3 = 1;
                    break;
                }
              
                temp2++;
            }
            if (flag3) count2 = temp2;
            // if (mm != -1) {
            //     for (int i = mm - 1; i >= 0; i--) {
            //         if (s[i] == '1') {  
                        
            //             break;
            //         }  else if(s[i]!='0')
            //         temp2++;
            //     }
            // }
            
        }

        int result = min(count, min(count1, count2));
        cout<<result<<endl;
        
    }
}
