
/* https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1 */
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int count0=0,count1=0,count2=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0)
            {
                count0++;
            }
            if(arr[i]==1)
            {
                count1++;
            }
            if(arr[i]==2)
            {
                count2++;
            }
        }
       for(int i=0;i<count0;i++){
           
           arr[i]=0;
       }
       for(int i=count0;i<count0+count1;i++){
           
           arr[i]=1;
       }
       for(int i=count0+count1;i<count0+count1+count2;i++){
           
           arr[i]=2;
       }
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends