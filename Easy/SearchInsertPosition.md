# Search Insert Position (Easy)
* Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
* You may assume no duplicates in the array.

```c++
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //try to follow binary search
        
        //initialize left and right positions
        int left = 0, right = (nums.size()-1);
        return binarySearch(nums,target,left,right);
    }
    
    int binarySearch(vector<int> nums, int target, int left, int right){
        //do this all if right-left > 2
        if(right-left > 2){
        //find mid (half of left + right)
            int mid = (left+right)/2;
        
        //if nums[mid] < target return binarySearch(mid,right)
        //elif nums[mid] > target return binarySearch(left,mid)
        //else return mid
            if(nums[mid] < target) 
                return binarySearch(nums,target,mid,right);
            else if(nums[mid] > target) 
                return binarySearch(nums,target,left,mid);
            else
                return mid;
        }else if((right-left) == 2){
            if(target <= nums[left]) return left;
            else if(target <= nums[left+1]) return left+1;
            else if(target > nums[right]) return right+1;
            else return right;
        }else if((right-left)==1){
            if(nums[left] >= target) return left;
            else if(target > nums[right]) return right+1;
            else return right;
        }else if((right-left)==0){
            if(target <= nums[left]) return left;
            else return left+1;
        }
        
        return -1;
    }
};
//seems more like machine learning code -- lol ;
```