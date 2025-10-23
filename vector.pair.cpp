#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<pair<int ,string>>details={{1, "sohel"}, {2,"rana"}};
for(int i=0;i<details.size();i++)
{
    cout<<details[i].first<<" "<<details[i].second;
    cout<<endl;
}

cout<<endl;

details.push_back(make_pair(3,"shikha"));
for(int i=0;i<details.size();i++)
{
    cout<<details[i].first<<" "<<details[i].second;
    cout<<endl;
}

cout<<endl;

details.erase(details.begin()+2);

for(int i=0;i<details.size();i++)
{
    cout<<details[i].first<<" "<<details[i].second;
    cout<<endl;
}

cout<<endl;







}