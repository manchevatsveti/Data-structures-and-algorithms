#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// Function to get index for each character based on its type
int getIndex(char ch) {
    int id = 0;
    if (ch >= '0' && ch <= '9') {
        id = ch - '0';            // '0' to '9'
    } else if (ch >= 'a' && ch <= 'z') {
        id = ch - 'a' + 10;       // 'a' to 'z'
    } else if (ch >= 'A' && ch <= 'Z') {
        id = ch - 'A' + 36;       // 'A' to 'Z'
    }
    return id;
}

int main() {
    int n = 0;
    cin >> n;                     // Read the number of characters
    
    string s;
    cin >> s;                     // Read the input string
    
    string copy = s;              // Create a copy of the input string
    
    int count[63] = {0};          // Array to hold the count of each character
    
    int size = s.size();
    
    // Count occurrences of each character
    for (int i = 0; i < size; i++) {
        count[getIndex(s[i])]++;
    }
    
    // Compute cumulative counts
    for (int i = 1; i < 63; ++i) {
        count[i] += count[i - 1];
    }
    
    // Build the sorted string
    for (int i = n - 1; i >= 0; i--) {
        s[count[getIndex(copy[i])] - 1] = copy[i];
        count[getIndex(copy[i])]--;
    }
    
    // Output the sorted string
    cout << s;
    
    return 0;
}
