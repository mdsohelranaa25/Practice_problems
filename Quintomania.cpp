#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> notes(n);
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> notes[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(notes[i] - notes[i + 1]) == 5 || abs(notes[i] - notes[i + 1]) == 7)
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}