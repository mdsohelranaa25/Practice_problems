#include<bits/stdc++.h>
using namespace std;
int main()
{

    int nums[5]={2,5,2,4,5};
    int ans=0;
    for(int i=0;i<5;i++)
    {
        ans^=nums[i];
        
    }
    cout<<"that single integer is :"<<ans<<endl;
}