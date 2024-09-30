//https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";

        while (word.length() < k) {
            string newpart = "";

            for (char c : word) {
                if (c == 'z') {
                    newpart += 'a';
                } else {
                    newpart += c + 1;
                }
            }
            word += newpart;
        }
        return word[k - 1];
    }
};
int main() {
    int k;
    cout << "enter the value of k" << endl;
    cin >> k;
    char result = Solution().kthCharacter(k);
    cout << "the kth charcter is :" << result << endl;
    return 0;
}