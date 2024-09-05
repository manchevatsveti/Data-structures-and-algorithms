#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr; // Vector to store the skills of developers
int dev, teams; // Number of developers and teams
long long bestcase = 0; // Variable to store the result

// Function to check if it's possible to divide developers into 'teams' teams
// such that no team has a total skill sum greater than 'target'
bool enough(long long target) {
    long long tempSum = 0; // Sum of skills for the current team
    long long teamsCount = 1; // Number of teams used so far
    
    for (int i = 0; i < dev; i++) {
        if (tempSum + arr[i] > target) {
            teamsCount++; // Need a new team
            tempSum = 0; // Reset the sum for the new team
        }
        tempSum += arr[i]; // Add the skill to the current team
    }
    
    return teamsCount <= teams; // Return whether the number of teams used is within the limit
}

int main() {
    cin >> dev >> teams; // Read the number of developers and teams
    arr.resize(dev); // Resize the vector to hold the developers' skills
    
    long long l = 0, r = 0; // Initialize the binary search range
    for (int i = 0; i < dev; i++) {
        cin >> arr[i]; // Read the skill of each developer
        if (arr[i] > l) l = arr[i]; // Update the lower bound of binary search
        r += arr[i]; // Update the upper bound of binary search
    }
    
    // Binary search to find the minimum possible maximum sum of skills
    while (l <= r) {
        long long mid = l + (r - l) / 2;
        
        if (enough(mid)) {
            bestcase = mid; // Update the best case result
            r = mid - 1; // Try for a smaller maximum sum
        } else {
            l = mid + 1; // Increase the maximum sum
        }
    }
    
    cout << bestcase; // Output the result
    return 0;
}
