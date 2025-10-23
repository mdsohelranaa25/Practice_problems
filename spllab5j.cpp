#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;
    long long count = 0;
    long long m;
    

    for (int i = 0; i < t-1; i++) {
        cin >> m;
        count += m;
    }

    
    long long sum = 0;
    for (int i = 1; i <= t; i++) {
        sum += i;
    }

  
    cout << sum - count << endl;

    return 0;
}
