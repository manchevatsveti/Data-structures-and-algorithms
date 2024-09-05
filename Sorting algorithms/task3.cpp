#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>

using namespace std;

struct Boy {
    int d = 0;             // Diameter of the weights
    double efficiency = 0; // Efficiency of carrying weights
    int id = -1;           // Identifier of the boy

    // Overloaded less-than operator for sorting
    friend bool operator<(const Boy& left, const Boy& right);
};

// Define the comparison operator for sorting
bool operator<(const Boy& left, const Boy& right) {
    // If efficiencies are approximately equal, sort by diameter in descending order
    if (abs(left.efficiency - right.efficiency) < numeric_limits<double>::epsilon()) {
        return left.d > right.d;
    }
    // Otherwise, sort by efficiency in descending order
    return left.efficiency > right.efficiency;
}

int main() {
    int n = 0;
    cin >> n;  // Read the number of boys
    
    Boy arr[n];
    for (int i = 0; i < n; ++i) {
        int d = 0;
        cin >> d;
        arr[i].d = d;
        
        int t = 0;
        cin >> t;
        // Calculate efficiency as (d^2 / t) and store it
        arr[i].efficiency = (((double)d / 2) * ((double)d / 2)) / t;
        
        arr[i].id = i + 1;  // Set the id of the boy
    }
    
    // Sort the array of boys using the overloaded operator<
    stable_sort(arr, arr + n);
    
    // Print the ids of boys in sorted order
    for (int i = 0; i < n; ++i) {
        cout << arr[i].id << " ";
    }
    
    return 0;
}
