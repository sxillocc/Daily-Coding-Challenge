# Longest Palindromic Substring (Medium)
*  Refer [this](https://leetcode.com/problems/longest-palindromic-substring/) page for question. 

## Solution
```c++
class Solution {
public:
    int expandAroundCenter(int left, int right, string s){
        int length = s.length();
        int L = left, R = right;
        int center = L;
        
        while(L >= 0 && R < length && s[L] == s[R]){
            L--;
            R++;
        }
        
        return R-L-1;
    }
    
    string longestPalindrome(string s) {
        int max = 0;
        string longestString = "";
        for(int i=0; i<s.length(); i++){
            int l1 = expandAroundCenter(i,i,s);
            int l2 = expandAroundCenter(i,i+1,s);
            if(max < l1){
                max = l1;
                longestString = s.substr(i-l1/2,l1);
            }
            if(max < l2){
                max = l2;
                longestString = s.substr(1+i-l2/2,l2);
            }
        }
        return longestString;
    } 
};
```
