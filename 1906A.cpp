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
   char ch[3][3];
   ll n=3;
  // map<char,ll>mp;
   itr(i,3){
    itr(j,3){
        cin>>ch[i][j];
        // mp[ch[i][j]]++;
    }
   }
//    if(mp['A']==9) cout<<"AAA"<<endl;
//    else if(mp['B']==9) cout<<"BBB"<<endl;
//    else if(mp['C']==9) cout<<"CCC"<<endl;
//    else {
    char c='D',d='D',e='D';
    ll r1,c1;
    ll inx[]={-1,-1,-1,1,1,1,0,0};
    ll iny[]={-1,+1,0,-1,+1,0,-1,+1};
    itr(i,n){
        itr(j,n){
            if(ch[i][j]<c){
                char a=ch[i][j];
                c=a;
                 d='D';
                 e='D';
                itr(l,8){
                    char cc;
                    if(((i+inx[l])<3&&(i+inx[l])>=0)&&(j+iny[l]<3&&(j+iny[l])>=0))
                     cc=ch[i+inx[l]][j+iny[l]];
                    else cc='F';
                    
                    if(cc<d){
                        d=cc;
                    char aa= cc;
                    r1=i+inx[l],c1=j+iny[l];
                    char cch='D';
                    char ccc='Z'; 
                    itr(lll,8){  
                        
                        if(((r1+inx[lll])<3&&(r1+inx[lll])>=0&&(c1+iny[lll])<3&&(c1+iny[lll])>=0)&&!(r1+inx[lll]==i&&c1+iny[lll]==j))     
                          ccc=ch[r1+inx[lll]][c1+iny[lll]];
                        if(ccc<=cch)
                           cch=ccc;
                    }
                    e= cch;

                }
                else if(cc==d){
                    d=cc;
                    r1=i+inx[l],c1=j+iny[l];
                    char cch='D';
                    itr(lll,8){  
                        char ccc='Z';      
                        if(((r1+inx[lll])<3&&(r1+inx[lll])>=0&&(c1+iny[lll])<3&&(c1+iny[lll])>=0)&&!(r1+inx[lll]==i&&c1+iny[lll]==j))     
                          ccc=ch[r1+inx[lll]][c1+iny[lll]];
                        if(ccc<cch)
                           cch=ccc;
                    }
                    if(cch<=e) e=cch;
                }
            }


        }
        else if(ch[i][j]==c){
            char a=ch[i][j];
            c=a;
            itr(l,8){
                    char cc='E';
                    if(((i+inx[l])<3&&(i+inx[l])>=0)&&(j+iny[l]<3&&(j+iny[l])>=0))
                     cc=ch[i+inx[l]][j+iny[l]];
                    else cc='F';
                    
                    if(cc<d){
                      
                        d=cc;
                        
                    char aa= cc;
                    r1=i+inx[l],c1=j+iny[l];
                    char cch='D';
                    char ccc='Z'; 
                    itr(lll,8){  
                              
                        if(((r1+inx[lll])<3&&(r1+inx[lll])>=0&&(c1+iny[lll])<3&&(c1+iny[lll])>=0)&&!(r1+inx[lll]==i&&c1+iny[lll]==j))     
                          ccc=ch[r1+inx[lll]][c1+iny[lll]];
                        if(ccc<=cch)
                           cch=ccc;
                    }
                    e= cch;

                }
                else if(cc==d){
                  
                    
                    r1=i+inx[l],c1=j+iny[l];
                    char cch='Z';
                    itr(lll,8){  
                        char ccc='Z';      
                        if(((r1+inx[lll])<3&&(r1+inx[lll])>=0&&(c1+iny[lll])<3&&(c1+iny[lll])>=0)&&!(r1+inx[lll]==i&&c1+iny[lll]==j))     
                          ccc=ch[r1+inx[lll]][c1+iny[lll]];
                        if(ccc<=cch)
                           cch=ccc;
                    }
                    if(cch<=e) e=cch;
                }
        }
    }
    cout<<c<<" "<<d<<" "<<e<<endl;

    
   }
}
   //cout<<mp['A']<<" "<<mp['B']<<" "<<mp['C']<<endl;
   

cout<<c<<d<<e<<endl;

   
    }

    
