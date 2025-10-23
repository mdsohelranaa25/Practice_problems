#include<bits/stdc++.h>
using namespace std;
void palindram(int i,string s )
{
    if(i>=s.size()/2)
    {
        cout<<"palindram ";
        
        return ;
    }
    else if(s[i]!=s[s.size()-i-1]){
        cout<<"Not palindram";
        return ;



    }

    palindram(i+1, s);

}

int main()
{
   
    string s;
    cin>>s;

    palindram(0, s);

}