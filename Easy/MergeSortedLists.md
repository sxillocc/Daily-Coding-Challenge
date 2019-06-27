# Merge Two Sorted Lists (Easy)
* Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

## Solution
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* temp = new ListNode(0);
        ListNode* l3 = temp;
        
        while(1){
            //break if reached at end of "ANY" list.
            if(!l1 || !l2){
                break;
            }
            
            //pick "smaller or equal" one from both heads
            int smallerOne = (l1->val <= l2->val) ? l1->val : l2->val;
            // printf("%d\n",smallerOne);
        
            //make new one with above picked value
            ListNode* newNode = new ListNode(smallerOne);
            temp->next = newNode;
            temp = temp->next;
            
            //go to next node
            if(l1->val <= l2->val){
                l1 = l1->next;
            }else{
                l2 = l2->next;//what if i ended?? //save me
            }
            
        }
        
        //check whether no elements left in list 1 and 2;
        if(!l1){
            while(l2){
                    ListNode* newNode = new ListNode(l2->val);
                    temp->next = newNode;
                    temp = temp->next;
                    l2 = l2->next;
            }
        }
        if(!l2){
            while(l1){
                    ListNode* newNode = new ListNode(l1->val);
                    temp->next = newNode;
                    temp = temp->next;
                    l1 = l1->next;
            }
        }
        
        temp = l3;
        l3 = l3->next;
        delete temp;
        
        return l3;
    }
};
```