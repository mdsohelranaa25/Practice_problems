#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> decks(n);
        for (int i = 0; i < n; i++) {
            decks[i].resize(m);
            for (int j = 0; j < m; j++) {
                cin >> decks[i][j];
            }
            sort(decks[i].begin(), decks[i].end());
        }

        // vector<int> order(n);
        // iota(order.begin(), order.end(), 0);

        bool valid = false;

       
            int top_card = -1;
            bool can_play = true;

            for (int round = 0; round < m; round++) {
                for (int i = 0; i < n; i++) {
                   
                    if (decks[i][round] > top_card) {
                        top_card = decks[i][round];
                    } else {
                        can_play = false;
                        break;
                    }
                }
                if (!can_play) break;
            }

            if (can_play) {
                valid = true;
                int freq[n]={0};
                for (int i = 0; i < n; i++) {
                   freq[decks[i][0]]=i;
                }
                for(int i=0;i<n;i++){
                    cout<<freq[i]<<" "<<endl;

                }
                cout << endl;
                break;
            }

       

        if (!valid) {
            cout << -1 << endl;
        }
    }
    return 0;
}
