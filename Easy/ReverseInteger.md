# Reverse Integer (Easy)
* Given a 32-bit signed integer, reverse digits of an integer.
* Your function should returns 0 when the reversed integer overflows.

```c++
class Solution {
public:
    int reverse(int x) {
        const int MAX_INT = 2147483647;
        const int MIN_INT =-2147483648;
        int rev = 0;
        
        while(x){
            int d = x % 10;
            x /= 10;
            
            if( (rev < MAX_INT/10 || (rev==MAX_INT/10 && d<=7))
              &&(rev > MIN_INT/10 || (rev==MIN_INT/10 && d>=-8)) ){
                rev = rev * 10 + d;
            }else{
                return 0;
            }
            
        }
        
        return rev;
    }
};
```
