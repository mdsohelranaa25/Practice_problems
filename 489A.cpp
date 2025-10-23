#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b,c;
int d,e,f;
cin>>a>>b>>c;
if(a>=b&&a>=c){
    d=a;
}
else if(b>=a&&b>=c){
    d=b;

}
 else d=c;

 if(a<=b&&a>=c||a>=b&&a<=c){
    e=a;
 }
else if(b<=a&&b>=c||b>=a&&b<=c){
e=b;
}
else e=c;

 if (a != d && a != e) {
        f = a;
    } else if (b != d && b != e) {
        f = b;
    } else {
        f = c;
    }

if(d==e==f==1){
    cout<<a+b+c;
}
else if(f!=1){
    cout<<d*e*f;
}

else cout<<(f+e)*d;
}