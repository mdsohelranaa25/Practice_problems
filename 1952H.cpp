#include <bits/stdc++.h>
using namespace std;
bool isPalin(vector<char> palin)
{
    int pSize = palin.size();
    if (pSize == 1)
    {
        return true;
    }
    else
    {
        bool drome = true;
        for (int i = 0; i < pSize / 2; i++)
        {
            if (palin[i] != palin[pSize - i - 1])
            {
                drome = false;
                break;
            }
        }
        return drome;
    }
}
int main()
{
    int n, nCopy;
    cin >> n;
    nCopy = n;
    vector<string> inp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> inp[i];
    }
    string get = "";
    for (int i = 0; i < n; i++)
    {
        vector<char> palin;
        for (string x : inp)
        {
            if (i < x.length())
            {
                palin.push_back(x[i]);
            }
        }
        if (isPalin(palin))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}