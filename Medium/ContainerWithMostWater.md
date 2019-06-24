# Container with most Water (Medium)
* Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.
* You may not slant the container and n is at least 2.

## Solution
```c++
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0,width = (height.size() - 1);
        
        // cout<<width;
        while(height.size()>=2){
            
            int left = height.front(),right = height.back();
            int area = (left <= right) ? (left*width) : (right*width) ;
            
            if(max < area){
                max = area;
            }
            
            if(left<right)
                height.erase(height.begin());
            
            else
                height.pop_back();
            
            
            width--;
        }
        
        return max;
    }
};
```
