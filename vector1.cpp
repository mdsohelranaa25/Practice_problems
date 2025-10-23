#include<bits/stdc++.h>
using namespace std;
int main()

{
    /*
vector<int>v={1,2,3,4,5,6,7,8};
vector<int>:: iterator it;
for(it=v.begin()+1;it!=v.end();it++)
{
    cout<<*it <<" ";
}


vector<int>v={1,2,3,4,5,6,7,8};
vector<int>::reverse_iterator rit;
for(rit=v.rbegin()+1;rit!=v.rend();rit++)
{
    cout<<*rit <<" ";
}
*/


vector<char>vowel={'a' ,'e','i' ,'o'};

for(int i=0;i<vowel.size();i++)
{
cout<<vowel.at(i)<<" "<<endl;

}

/*
cout<<endl;
cout<<"size of vector vowels is:"<<vowel.size()<<endl;
cout<<"max size of vector vowel is :"<<vowel.max_size()<<endl;
cout<<"capacity of vector vowel is :" <<vowel.capacity()<<endl;

vowel.push_back('u');
cout<<"size of vector vowels is:"<<vowel.size()<<endl;
cout<<"max size of vector vowel is :"<<vowel.max_size()<<endl;
cout<<"capacity of vector vowel is :" <<vowel.capacity()<<endl;

*/

vowel.resize(2);
for(int i=0;i<vowel.size();i++)
{
cout<<vowel.at(i)<<" ";

}

}