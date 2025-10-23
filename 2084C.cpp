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
    #define no cout<<"-1"<<endl
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
    
    ll n;
    cin>>n;
    vc(a,n);
    vc(b,n);
    bool f=1;
    map<ll,ll>ma,mb,mpa,mpb;
    ll cn=0;
    ll cnt=0;
    itr(i,n) { cin>>a[i]; mpa[a[i]]=i+1;
    }
    itr(i,n) {cin>>b[i]; mpb[b[i]]=i+1;
    }
    vector<ll>vv;
    itr(i,n){
        if(a[i]==b[i]) cnt++;
        if(cnt>1) {
            f=0;
            break;
        }
        if(n%2==0&&cnt==1){
            f=0;
            break;
        }
        else {
            ma[a[i]]=b[i];
            mb[b[i]]=a[i];
        }
        
    }
    
    if(f==0) no;
    else {

        itr(i,n){
            if(ma[a[i]]!=mb[a[i]]){
                f=0;
                break;
            }
        }
        if(f==0) no;
        else {
            
            
            // itr(i,n){
            //     if(mpb[a[i]]!=(n+1-mpa[a[i]])){
            //         ll a,b,c,d,k,l;
            //         a=b[i],b=a[i];
            //         k=mpa[a],l=n+1-mpa[a[i]];
            //         c=a[l-1LL],d=b[l-1LL];
            //         a[k-1LL]=c,b[k-1LL]=d,a[l-1LL]=a,b[l-1LL]=b;
            //         mpa[c]=k,mpa[a]=l,mpb[d]=k,mpb[b]=l;
            //         cn++;
            //         vv.push_back(min(k,l));
            //         vv.push_back(max(k,l));
            //     }
            // }
            itr(i,n){
                
                    if(a[i]==b[i]&&mpb[a[i]]!=(n+1-mpa[a[i]])){
                        ll aa = b[i], bb=aa;
                    ll k= mpa[aa], l = (n+1)/2;
                    ll cc = a[l-1LL], dd = b[l-1LL];
                    a[k-1LL] = cc; b[k-1LL] = dd;
                    a[l-1LL] = aa; b[l-1LL] = bb;
                    mpa[cc] = k; mpa[aa] = l;
                    mpb[dd] = k; mpb[bb] = l;
                    cn++;
                    vv.push_back(min(k, l));
                    vv.push_back(max(k, l));

                    }
                    if(mpb[a[i]]!=(n+1-mpa[a[i]])){
                    ll aa = b[i], bb = a[i];
                    ll k= mpa[aa], l = n+1-mpa[a[i]];
                    ll cc = a[l-1LL], dd = b[l-1LL];
                    a[k-1LL] = cc; b[k-1LL] = dd;
                    a[l-1LL] = aa; b[l-1LL] = bb;
                    mpa[cc] = k; mpa[aa] = l;
                    mpb[dd] = k; mpb[bb] = l;
                    cn++;
                    vv.push_back(min(k, l));
                    vv.push_back(max(k, l));
                }
            }
            
            cout<<cn<<endl;
            ll i=0;
            while(i<vv.size()){
                cout<<vv[i]<<" "<<vv[i+1]<<endl;
                i+=2;
            }
        }
    }

    
    
    }
    }
    
