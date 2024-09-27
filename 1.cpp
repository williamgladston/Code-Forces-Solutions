
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        int n;
        cin >> n; // Length of the array
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; // Reading the array
        }
                /*4
        3
        5 4 5
        3
        4 5 4
        10
        3 3 3 3 4 1 2 3 4 5
        9
        17 89 92 42 29 92 14 70 45
        */
        // We will consider two cases: choosing elements at odd indices or at even indices
        int maxOdd = 0, oddCount = 0; // Max value and count for odd indexed elements
        int maxEven = 0, evenCount = 0; // Max value and count for even indexed elements
        
        // Traverse the array and pick elements based on their index (odd/even)
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                // Even index (0-based)
                maxEven = max(maxEven, a[i]);
                ++evenCount;
            } else {
                // Odd index (0-based)
                maxOdd = max(maxOdd, a[i]);
                ++oddCount;
            }
        }
        
        // Calculate the score for both cases
        int scoreEven = maxEven + evenCount;
        int scoreOdd = maxOdd + oddCount;
        
        // The maximum score is the best of both
        cout << max(scoreEven, scoreOdd) << endl;
    }
    
    return 0;
}
