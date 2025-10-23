#include<bits/stdc++.h>
using namespace std;
int main(){
long long rem,num1,num2,gcd;
cin>>num1>>num2;
while(num2!=0){
    rem=num1%num2;
    num1=num2;
    num2=rem;
}
gcd=num1;

cout<<gcd;




}