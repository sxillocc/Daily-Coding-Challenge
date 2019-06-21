# Two Sum (Easy)
* Given an array of integers, return indices of the two numbers such that they add up to a specific target.
* You may assume that each input would have exactly one solution, and you may not use the same element twice.
```c++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        for(int i = 0; i < (nums.size() - 1); i++){
            for(int j = i+1; j<nums.size();j++)
                if(nums[i]+nums[j] == target){
                    answer.push_back(i);
                    answer.push_back(j);
                }
        }
        return answer;
    }
};
```
