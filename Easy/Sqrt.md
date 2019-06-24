# Sqrt(x) (Easy)

* Implement `int sqrt(int x)`.
* Compute and return the square root of x, where x is guaranteed to be a non-negative integer.
* Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.

```c++
class Solution {
public:
    int mySqrt(int x) {
    
        double s = sqrt(x);
        int ans = (int) s;
        
        // cout<<ans; //for debugging
        
        return ans;
    }
};
```
