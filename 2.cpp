#include <iostream>
#include <algorithm> // For std::min and std::max
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) { // Loop for each test case
        int x, y;
        cin >> x >> y; // Read the two integers
        
        // Calculate minimum and maximum
        int min_value = min(x, y);
        int max_value = max(x, y);
        
        // Output the results
        cout << min_value << " " << max_value << endl;
    }

    return 0;
}
//kotlin

fun main() {
    val t = readLine()!!.toInt() // Read the number of test cases

    repeat(t) { // Loop for each test case
        val (x, y) = readLine()!!.split(" ").map { it.toInt() } // Read and split the integers
        val minValue = minOf(x, y) // Calculate minimum
        val maxValue = maxOf(x, y) // Calculate maximum
        
        // Output the results
        println("$minValue $maxValue")
    }
}
