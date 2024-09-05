#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read the number of students and the number of queries
    int s = 0;
    cin >> s;
    
    int intervals = 0;
    cin >> intervals;
    
    // Read the scores into a vector
    vector<int> arr(s);
    for(int i = 0; i < s; i++) {
        cin >> arr[i];
    }
    
    // Sort the array of scores
    sort(arr.begin(), arr.end());
    
    // Process each query
    for(int i = 0; i < intervals; i++) {
        int low = 0, upper = 0;
        cin >> low >> upper;
        
        // Find the lower and upper bounds in the sorted array
        auto id1 = lower_bound(arr.begin(), arr.end(), low);
        auto id2 = upper_bound(arr.begin(), arr.end(), upper);
        
        // Calculate the number of elements within the interval [low, upper]
        if (low > upper) {
            cout << 0 << endl;
        } else {
            cout << (id2 - id1) << endl;
        }
    }
    
    return 0;
}
