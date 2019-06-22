# Add Two Numbers (Medium)
* You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
* You may assume the two numbers do not contain any leading zero, except the number 0 itself.

```c++
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* root = new ListNode(0);
        ListNode* l3 = root;
        int carry = 0;
        while(l1 || l2){
            carry = add(l1,l2,l3,carry);
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
            if(l1 || l2){
                l3->next = new ListNode(0);
                l3 = l3->next;
            }
        }
        if(carry>0){
            //surely it would be 1
            l3->next = new ListNode(carry);
            l3=l3->next;
        }
        
        //currently root is at start and l3 is at end
        
        return root;
    }
    
private:
    int add(ListNode* l1,ListNode* l2,ListNode* l3,int carry){
        int temp = 0;
        if(l1 && l2){
            temp = l1->val + l2->val + carry;   
        }else if(l1){
            //there is no l2
            temp = l1->val + 0 + carry;
        }else{
            temp = 0 + l2->val + carry;
        }
        l3->val = temp%10;
        
        return temp/10;
    }
};
```