// first attempt 
class Solution {
public:
    int romanToInt(string s) {
        int arr[s.length()];
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            if ( 'I' == s[i]) {
                arr[i] = 1;
            } else {
                if ( 'V' == s[i]) {
                    arr[i] = 5;
                } else {
                    if ( 'X' == s[i]) {
                        arr[i] = 10;
                    } else {
                        if ( 'L' == s[i]) {
                            arr[i] = 50;
                        } else {
                            if ( 'C' == s[i]) {
                                arr[i] = 100;
                            } else {
                                if ( 'D' == s[i]) {
                                    arr[i] = 500;
                                } else {
                                    if ('M' == s[i]) {
                                        arr[i] = 1000;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        for (int i = 1; i < s.length(); i++){
            if(arr[i-1]<arr[i]){
             sum = arr[i]- arr[i-1];
            }
             else{
            sum = sum + arr[i-1] ;
        }
        }
        return sum;
    }
};

//answer
class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int n = s.length();

        // Map Roman numeral characters to their integer values
        for (int i = 0; i < n; i++) {
            // Check the current and next Roman numerals to handle subtraction cases
            if (i < n - 1 && romanValue(s[i]) < romanValue(s[i + 1])) {
                // If the current numeral is smaller than the next one, subtract it
                sum -= romanValue(s[i]);
            } else {
                // Otherwise, add it
                sum += romanValue(s[i]);
            }
        }
        
        return sum;
    }

private:
    // Helper function to map Roman numerals to integer values
    int romanValue(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};

