#include <iostream>
using namespace std;

int dif(int ele[][100], int row, int col) {
    if (row == 0 || col == 0) return 1;
    return ele[row - 1][col] + ele[row][col - 1];
}

int main() {
    int n;
    cin >> n;
    int ele[100][100] = {0};

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            ele[row][col] = dif(ele, row, col);
        }
    }

    cout<<ele[n-1][n-1];
    }

 
