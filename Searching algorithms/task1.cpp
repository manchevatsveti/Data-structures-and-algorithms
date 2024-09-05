#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    // Read the number of students and the required difference
    int stCount = 0;
    cin >> stCount;

    int diff = 0;
    cin >> diff;

    // Read the topic numbers into a vector
    vector<int> arr(stCount);
    for (int i = 0; i < stCount; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr.begin(), arr.end());

    // Use an unordered set to track numbers seen so far
    unordered_set<int> seen;
    int count = 0;

    for (int i = 0; i < stCount; i++) {
        // Check if the number that would form a valid pair is in the set
        if (seen.count(arr[i] - diff)) {
            count++;
        }
        // Add the current number to the set
        seen.insert(arr[i]);
    }

    // Output the count of valid pairs
    cout << count << endl;

    return 0;
}
