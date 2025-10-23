#include<bits/stdc++.h>
using namespace std;

// Function to merge two subarrays of arr[]
void merge(vector<int>& arr, int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    vector<int> v;

    // Merging the two halves in descending order
    while(i <= mid && j <= high) {
        if(arr[i] >= arr[j]) {
            v.push_back(arr[i]);
            i++;
        } else {
            v.push_back(arr[j]);
            j++;
        }
    }

    // Copy remaining elements of the left half
    while(i <= mid) {
        v.push_back(arr[i]);
        i++;
    }

    // Copy remaining elements of the right half
    while(j <= high) {
        v.push_back(arr[j]);
        j++;
    }

    // Copy the merged elements back into the original array
    for(int k = 0; k < v.size(); k++) {
        arr[low + k] = v[k];
    }
}

// Function to perform merge sort on the array
void ms(vector<int>& arr, int low, int high) {
    if(low >= high)
        return;

    int mid = (low + high) / 2;

    // Recursively sort the first and second halves
    ms(arr, low, mid);
    ms(arr, mid + 1, high);

    // Merge the two halves
    merge(arr, low, mid, high);
}

int main() {
    vector<int> arr = {1, 4, 3, 2, 5, 7, 56, 4, 8, 6, 5, 4, 11};
    int low = 0;
    int high = arr.size() - 1;

    ms(arr, low, high);

    // Print the sorted array
    for(int i = 0; i <= high; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
