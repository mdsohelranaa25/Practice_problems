
   /*


 	   *********     .**.     |       |  |---------|  |
	 /              /    \    |       |  |            |
        *              /      \   |       |  |            |
         *            |        |  |       |  |	          |
	   *  *       |        |  |-------|  |------|	  |    		       *
                *     |        |  |       |  |            |
	         *     \      /   |	  |  |            |
		 *      \    /    |       |  |            |
	        /        '**'     |       |  |---------|  |___________|
     **********


				*/
#include<bits/stdc++.h>
using namespace std;
#define tt int t;cin>>t;while(t--)

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long
#define endd cout<<endl
#define vc(v, n) vector<ll> v(n)
#define srt(v) sort(v.begin(), v.end())
#define f first
#define sc second
int main(){
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
tt{
 ll n,k;
 cin>>n>>k;
 ll lf=k-1,rt=n-k;
 if(lf%2==rt%2) {
    if(lf%2==0){
        if(k==1&&n==1) cout<<1<<endl<<1<<endl;
        else if(lf>1&&rt>1)
    {
        cout<<5<<endl;
        cout<<1<<" "<<2<<" "<<k<<" "<<k+1<<" "<<k+2<<endl;
    }
    else cout<<-1<<endl;
    }
    else {
        cout<<3<<endl;
        cout<<1<<" "<<k<<" "<<k+1<<endl;
    }
 }
 else cout<<-1<<endl;
 

}
}
