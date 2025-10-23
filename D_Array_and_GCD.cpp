// 		/*
// 			//! In The Name Of Allah
				
			
				
				
// 		*/                                                                                                                                                  
//     #include<bits/stdc++.h>
//     using namespace std;
//     #define tt int t;cin>>t;while(t--)
//     #define itr(i,a) for(int i=0;i<a;i++)
//     #define ittr(i,bg,a) for(int i=bg;i<a;i++)
//     #define yes cout<<"YES"<<endl
//     #define no cout<<"NO"<<endl
//     #define ll long long
//     #define endd cout<<endl
//     #define vc(v, n) vector<ll> v(n)  
//     #define srt(v) sort(v.begin(), v.end())
//     #define rsrt(v) sort(v.rbegin(), v.rend())
//     #define MOD 1000000007
//     #define f first
//     #define sc second
//     const ll N=1e7+5;
//     #define endl '\n'
//     vector<ll>a(N,1);
//     vector<ll>primes;
//   void sieve(){
  
//     for (ll i = 2; i*i<=N; i++) {
//         if (a[i]) {primes.push_back(i);

//             for (ll j = i; j <= N; j+=i) {
//                 a[i * j] = 0;
//             }
//         }
//     }
//   }
//     int main(){
//       ios::sync_with_stdio(false);
//         cin.tie(nullptr);
//         sieve();
//     tt{
//         ll n;
//         cin>>n;
//         vc(v,n);
//         itr(i,n) cin>>v[i];
//         srt(v);
//         ll i=n-1,j=n-1;
//         ll cnt=0;
//         ll pm=0;
//         ll have=0;
//         vector<ll>rem;
//         while(i>=0){
//             if(v[i]<=primes[pm]){
//                 have+=abs(primes[pm]-v[i]);
//                 pm++;
//                 i--;
                
//             }
//             else {
//             ll need=primes[pm]-v[i];
//             if(have>=need) {
//                 have-=need;
//                 pm++;
//                 i--;
//             }
//             else {rem.push_back(v[i]);
//                 i--;
//             }
//             }
            
//         }
//         if (rem.size()<=1)cout<<0<<endl;
//         else cout<<rem.size()-1<<endl;
//     //     else {
         
        
//     //     v=rem;
        
//     //     rem.clear();
//     //     n=v.size();
//     //     i=n-1;
//     //     while(i>=0){
//     //         if(v[i]<=primes[pm]){
//     //             have+=abs(primes[pm]-v[i]);
//     //             pm++;
//     //             i--;
                
//     //         }
//     //         else {
//     //         ll need=primes[pm]-v[i];
//     //         if(have>=need) {
//     //             have-=need;
//     //             pm++;
//     //             i--;
//     //         }
//     //         else {rem.push_back(v[i]);
//     //             i--;
//     //         }
//     //         }
            
//     //     }
//     //     if (rem.size()<=1)cout<<0<<endl;
//     //     else {
//     //         cout<<rem.size()-1<<endl;
//     //     }
    
//     // }
    
    
//     }
//     }
    
/*
    //! In The Name Of Allah
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
const ll N = 1e7+5;  
#define endl '\n'

vector<ll> a(N, 1);
vector<ll> primes;

void sieve(){
    a[0] = a[1] = 0;
    for (ll i = 2; i<= N; i++) {
        if (a[i]) {
            primes.push_back(i);
            for (ll j = i+i; j <= N; j += i) {
                a[j] = 0;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(); 

    tt {
        ll n;
        cin >> n;
        vc(v, n);
        itr(i, n) cin >> v[i];
        srt(v);

        ll i = n - 1, pm = 0;
        ll have = 0;
        vector<ll> rem;

        while (i >= 0) {
            if (pm >= primes.size()) break;

            if (v[i] >= primes[pm]) {
                have += abs(primes[pm] - v[i]);
                pm++;
                i--;
            }
            else {
                ll need = primes[pm] - v[i];
                if (have >= need) {
                    have -= need;
                    pm++;
                    i--;
                }
                else {
                    rem.push_back(v[i]);
                    i--;
                }
            }
        }
cout<<rem.size()<<endl;
    }
}
