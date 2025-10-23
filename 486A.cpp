#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
      int m;
    long long even,odd;
    even=n/2;
    odd=(n+1)/2;
    even=even*(even+1);
    odd=odd*odd;
    cout<<even-odd;
}