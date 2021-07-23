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
    ListNode* reverseList(ListNode* head) {
        stack<ListNode*> stk;
        ListNode * current;
        
        while(head != NULL && head->next != NULL){
            stk.push(head);
            head = head->next;
        }
        
        current = head;
        
        while(!stk.empty()){
            ListNode * tmp = stk.top();
            stk.pop();
            
            tmp->next = NULL;
            current->next = tmp;
            current = current->next;
        }
        
        return head;
    }
};