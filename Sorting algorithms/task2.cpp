#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 0;
    cin >> n;  // Read the number of elements
    
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];  // Read elements into the array
    }
    
    int arr_copy[n];
    for (int i = 0; i < n; ++i) {
        arr_copy[i] = arr[i];  // Copy the original array
    }
    
    // Sort the original array
    stable_sort(arr, arr + n);
    
    int count = 0;
    int lastId = -1;
    
    // Count the number of elements in the prefix of the array that are unchanged
    for (int i = 0; i < n; ++i) {
        if (arr[i] == arr_copy[i]) {
            count++;
        } else {
            lastId = i;
            break;
        }
    }
    
    // Count the number of elements in the suffix of the array that are unchanged
    if (lastId != -1) {
        for (int i = n - 1; i > lastId; --i) {
            if (arr[i] == arr_copy[i]) {
                count++;
            } else {
                break;
            }
        }
    }
    
    // Output the number of elements that need to be sorted
    cout << n - count;
    
    return 0;
}
