#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5,6,7,8,9,10,11};
    vector<int>::iterator it;
    it=v.begin();
    while(it!=v.end())
    {
        if(*it%2==0)
        {
            v.erase(it);
        }
        else 
        it++;
    }
    for(auto n:v)
    cout<<n<<" ";
}