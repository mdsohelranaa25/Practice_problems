#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1 = {2,3,4,5,6,7};
    vector<int>v2={10,11,12,13,14};
    cout<<"before swap :"<<endl;
    for(auto n:v1){


    cout<<n<<" ";
    }
    cout<<endl;
for(auto n:v2)
cout<<n<<" ";
cout<<endl;
v1.swap(v2);


cout<<"after swap: "<<endl;
      for(auto n:v1){


    cout<<n<<" ";
    }
    cout<<endl;
for(auto n:v2)
cout<<n<<" ";
cout<<endl;
    

}