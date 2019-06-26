# Implement strStr() function. (Easy)
* Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
* What should we return when needle is an empty string? This is a great question to ask during an interview.(return 0)

```c++
class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle.length() == 0) 
            return 0;
        
        if(needle.length() > haystack.length())
            return -1;
        
        if(needle.length() == haystack.length() && needle == haystack)
            return 0;
        
        for(int i=0; i<haystack.length(); i++){
            int k = 0,temp = i;
            while(haystack[temp] == needle[k]){
                temp++;
                k++;
                
                if(k == needle.length())
                    return i;
            }
        }
  
        return -1;
    }
};
```