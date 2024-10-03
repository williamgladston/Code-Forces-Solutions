

//first attempt 
class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int sum = 0;
        int lenght;
        sum = accumulate(nums.begin(), nums.end(), sum);
        if (sum % p == 0) {
            lenght = -1;
        } else {

            for (int i = 0; i < nums.size(); i++) {
                if ((sum - nums[i]) % p == 0) {
                    lenght = 0;

                } else {
                    if ((sum - nums[i] - nums[i + 1]) % p == 0)

                    {
                        lenght = 2;
                    } else {
                        if ((sum - nums[i] - nums[i + 1] - nums[i + 2]) % p ==
                            0)

                        {
                            lenght = 3;
                        } else {
                            lenght = -1;
                        }
                    }
                }
            }
        }
        return lenght;
    }
};

//second attempt

class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int sum = 0;
        int lenght;
        sum = accumulate(nums.begin(), nums.end(), sum);
        if (sum % p == 0) {
            lenght= 0;
        } else 
        {
            if(sum % p != 0) {
            for (int i = 0; i < nums.size(); i++) {
                nums[i] = nums[i-1]+nums[i];
             for (int j = 0; j <= i; j++){
                if(nums[j]%p==0){
                    lenght= j;
                }
             }
            }
        }
        else
        {
            lenght= -1;
        }
        }
        return lenght;
    }
};