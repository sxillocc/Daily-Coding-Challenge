# Roman to Integer (Easy)
* Convert given Roman number to integer.

## Help Chart
|**Symbol**   |**Value**    |
|:-----------:|:-----------:|
|I            | 1           |
|V            | 5           |
|X            | 10          |
|L            | 50          |
|C            | 100         |
|D            | 500         |
|M            | 1000        |

## Solution
```c++
class Solution {
public:
    int romanToInt(string s) {
    
        if(s.length() == 1){
            if(s[0] =='I')  return 1;
            if(s[0] =='V')  return 5;
            if(s[0] =='X')  return 10;
            if(s[0] =='L')  return 50;
            if(s[0] =='C')  return 100;
            if(s[0] =='D')  return 500;
            if(s[0] =='M')  return 1000;
            
        }
        
        int num = 0;
        
        for(int i=0;i<s.length();i++){
            string x = "" ;
            x += s[i] ;
            int n1 = romanToInt(x);
            int n2 = 0;
            if(i+1 != s.length()){
                x = "";
                x += s[i+1];
                n2 = romanToInt(x);
                if(n2 > n1){
                    num += (n2-n1);
                    i++;
                    continue;
                }
            }
            
            num += n1;
        }
        
        return num;
    }
};
```