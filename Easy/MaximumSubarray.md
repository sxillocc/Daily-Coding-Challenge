# Maximum Subarray (Easy)
*  Refer [this](https://leetcode.com/problems/maximum-subarray/) page for question. 

## Solution
```c++
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = 0, curMax = 0, m=0, firstNegative = true, allNegative = true;
        for(int i=0;i<nums.size();i++){
            if(nums[i] >= 0){
                allNegative = false;
            }
            else if(firstNegative && nums[i] < 0){
                firstNegative = false;
                m = nums[i];
            }
            else if(m < nums[i]){
                m = nums[i];
            }
            curMax += nums[i];
            if(curMax < 0){
                curMax = 0;
            }
            if(max < curMax){
                max = curMax;
            }
        }
        if(allNegative)
            return m;
        else
            return max;
    }
};
```
