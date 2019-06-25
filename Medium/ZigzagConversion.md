# ZigZag Conversion (Medium)
*  Refer [this](https://leetcode.com/problems/zigzag-conversion/) page for question. 

## Solution
```c++
class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows == 1) return s;
        
        vector<vector<char>> array;
        int i = 0,l = s.length(),k = 0;
        bool down = true;
        string ans = "";
        
        array.resize(numRows);
       
        while(i < l){
            char x = s[i];
            array[k].push_back(x);
            if(down){
                k++;
            }else{
                k--;
            }
            i++;
            
            if(k == numRows-1) down = false;
            if(k == 0) down = true;
        }
        
        for(int i=0; i<numRows; i++){
            for(int j=0; j<array[i].size();j++){
                ans += array[i][j];
            }
        }
        
        return ans;
    }
};
```