# Remove Duplicates from Sorted Array (Easy)
*  Refer [this](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) page for question. 

## Solution
```c++
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0, freq = 0;
        if(nums.size() == 0)
            return 0;
        for(int i=1; i<nums.size(); i++){
            int c = nums[i];
            if(nums[i-1] == c)
                freq++;
            else{
                freq = 0;
                nums[k+1] = nums[i];
                k++;
            }
        }
        return k+1;
    }
};
```
