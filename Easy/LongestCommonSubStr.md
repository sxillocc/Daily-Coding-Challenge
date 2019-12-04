# Longest Common Prefix. (Easy)
Check the question [here](https://leetcode.com/problems/longest-common-prefix/).

```c++
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size() == 0)
            return "";
        if(strs.size() == 1)
            return strs[0];
        string result = strs[0];
        int x = 0;
        while(x < (strs.size() - 1)){
            if( strs[x+1].find(result) == 0 ){
                    x++;
            }else{
                if(result == "")
                    break;
                else{
                    result = result.substr(0, result.size()-1);
                }
            }
        }  
        
        return result;
    }
};
```
