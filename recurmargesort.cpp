#include <bits/stdc++.h>
using namespace std;
void marge(vector<int> &arr, int low, int mid, int high);
void ms(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    ms(arr, low, mid);
    ms(arr, mid + 1, high);
    marge(arr, low, mid, high);
}
 x
void marge(vector<int> &arr, int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = 0;
    vector<int> v;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            v.push_back(arr[i]);
            i++;
        }
        else
        {
            v.push_back(arr[j]);
            j++;
        }
    }
     if (i > mid)
    {
        while (j <= high)
        {
            v.push_back(arr[j]);
            j++;
        }
    }
    else if (j > high)
    {
        while (i <= mid)
        {
            v.push_back(arr[i]);
            i++;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        arr[low + i] = v[i];
    }
}

int main()
{
    vector<int> arr = {1, 4, 3, 2, 5, 7, 56, 4, 8, 6, 5, 4, 11};
    int low = 0;
    int high = arr.size() - 1;
    ms(arr, low, high);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
