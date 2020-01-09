# Valid Parentheses (Easy)
*  Refer [this](https://leetcode.com/problems/valid-parentheses/) page for question. 

## Solution
```c++
class Solution {
public:
    bool isValid(string s) {
        int l = s.length();
        stack <char> validator;
        
        //algo
        //length odd -> false
        //for every char s[i]
            //if open braces push in stack
            //else
                //pop brace
                //if not similar
                    //return false    
        //if stack empty return true else false
        
        if(l%2 != 0){
            return false;
        }
        for(int i=0;i<l;i++){
            
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                validator.push(s[i]);
            else{
                char v = s[i];
                if(!validator.empty()){
                    char top = validator.top();
                    validator.pop();
                    switch(top){
                        case '{':
                            if(v != '}') return false;
                            break;
                        case '(':
                            if(v != ')') return false;
                            break;
                        case '[':
                            if(v != ']') return false;
                            break;
                        default:
                            cout<<"Invalid input"<<endl;
                    }    
                }
                else{
                    return false;
                }
            }
        }
        if(validator.empty()){
            return true;
        }else{
            return false;
        }
        
    }
};
```
