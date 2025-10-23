   /*       
		           
				     
 				   *********     .**.     |       |  |---------|  |                                                                          
				 /              /    \    |       |  |            |                                                     
			    *              /      \   |       |  |            |                                           
				 *            |        |  |       |  |			  |
				   * *        |        |  |-------|  |------|	  |   
				       *      |        |  |       |  |            |                                            
					     *     \      /   |	      |  |            |
						 *      \    /    |       |  |            |                                                     
			            /        '**'     |       |  |---------|  |___________|                                                                                                                                                    
		      ********** 
						                                                                                               
				         
				*/                                                                                                                                                  
#include<bits/stdc++.h>
using namespace std;
#define tt int t;cin>>t;while(t--)
#define f first 
#define se second
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
int main(){

tt{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>m;
    for(char ch:s){
        m[ch]++;

    }
    int count=0;
    for(auto it:m){
        if(it.se%2) count++;
    }
    if(count>k+1) no;
    else yes;
}
}