#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>numbers={1,2,3,4,5,6,7,8};
/*
int value;
for(int i=0;i<5;i++)
{   cout<<"enter value:";
    cin>>value;
    numbers.push_back(value);
}
for(int i=0;i<5;i++)
{
    cout<<numbers[i]<<endl;
}
*/
/*
cout<<"size:"<<numbers.size()<<endl;

vector<int>numbers2(numbers.begin(),numbers.end());

for(int i=0;i<=numbers2.size();i++)
{
    cout<<numbers2[i]<<endl;
}
*/

/*
vector<bool>n(10);
for(int i=0;i<10;i++)
{
    n.push_back(false);

}
for(int i=0;i<10;i++)
{
    cout<<n[i]<<endl;
    
}
*/

/*
cout<<"number at 0 inddex:"<<numbers.at(0)<<endl;
cout<<"number at 4 inddex:"<<numbers.at(4)<<endl;
 cout<<"number at 10 inddex:"<<numbers[10]<<endl;

cout<<"number at 10 inddex:"<<numbers.at(10)<<endl;

*/


vector<int>nm(5);
int i;
for(int i=0;i<4;i++)
{
    cin>>nm[i];
}
nm.at(4)=10;

for(i=0;i<5;i++)
{
    cout<<nm.at(i)<<endl;
}





}