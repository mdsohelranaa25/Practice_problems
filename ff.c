#include<bits/stdc++.h>
#include<cstring>
using namespace std;
typedef long long ll;
int main(){
    char w[101];
    cin >> w;
    int len = strlen(w);
    int cnt = 0 , x=0,i,j;

    for(i = 0 ; i<5 ; i++){
        for(j = x ; j<len; j++){
            if(i==0 && w[j]=='h'){
                x=j;
                cnt++;
                break;
            }
            if(i==1 && w[j]=='e'){
                x=j;
                cnt++;
                break;
            }
            if(i==2 && w[j]=='l'){
                x=j;
                cnt++;
                break;
            }
            if(i==3 && w[j]=='l'){
                x=j;
                cnt++;
                break;
            }
            if(i==4 && w[j]=='o'){
                x=j;
                cnt++;
                break;
            }
        }
    }
        if(cnt == 5){
            cout << "YES" <<  endl;
        }
        else  cout << "NO" << endl;
return 0;
}