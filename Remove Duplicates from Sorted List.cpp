/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * current = head;
        
        while(current != NULL){
            if(current->next != NULL){
                ListNode * next = current->next;
                
                while(next != NULL){
                    if(current->val == next->val){
                        next = next->next;
                    }
                    else{
                        break;
                    }
                }
                current->next = next;
            }
            current = current->next;
        }
        
        return head;
    }
};