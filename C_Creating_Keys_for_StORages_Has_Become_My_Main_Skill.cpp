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
    ll n,x;
    cin>>n>>x;
    bitset<40>k=x;
    map<ll,ll>mp;
    for(int i=0;i<40;i++){
        if(k[i]==1) mp[i]=1;
    }
    ll mex=-1;
    for(int i=0;i<40;i++){

            if(k[i]==0){
                if(i==0) mex=0;
                else
            mex=(1<<i);
            break;
            }
        
    }
    ll cnt=0;
    vector<ll>vec;
    for(int i=0;i<40;i++){
        if(mp[i]==1) vec.push_back(1<<(i));
    }
    set<ll>st;

ll len=vec.size();
//cout<<vec[len-1]<<" "<<mex-1<<endl;
if(vec.empty()){
    while(n--) cout<<0<<' ';
    endd;
}
else if(vec[len-1]<=min(mex-1,n-1)){
    
    cnt=0;
    for(int i=0;i<min(mex,n);i++){
        cout<<i<<' ';
        cnt++;
    }
    while(cnt<n){
        cout<<0<<' ';
        cnt++;
    }
    endd;
    
}
else {
   // cout<<"mm"<<endl;
    for(int i=0;i<min(mex,n-1);i++){
        cout<<i<<' ';
        cnt++;
    }
    cout<<x<<' ';
    cnt++;
    while(cnt<n){
        cout<<0<<' ';
        cnt++;
    }
    endd;

}
 
// for(int i=0;i<(mex,x);i++) {
//      st.insert(i);
// }
// for(int i=vec.size()-1;i>=0;i--){
//     st.insert(1<<vec[i]);
// }
// cnt=0;
// if(n>=st.size()){
// for(auto xx:st){
//     cnt++;
   
//     cout<<xx<<' ';
// }
// while(cnt<n){
//     cout<<0<<' ';
//     cnt++;
// }

// endd;
// }
// else {
//     for(auto xx:st){
//         if(cnt>=n-1) break;
//         cout<<xx<<' ';
//         cnt++;
//     }
//     cout<<x<<endl; 
// }

}
    }
    
