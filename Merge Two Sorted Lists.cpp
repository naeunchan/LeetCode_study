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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode * answer = NULL;
        ListNode ** current = &answer;
        
        while(l1 != NULL || l2 != NULL){
            if(l1 == NULL){
                *(current) = new ListNode(l2->val);
                l2 = l2->next;
            }
            else if(l2 == NULL){
                *(current) = new ListNode(l1->val);
                l1 = l1->next;
            }
            else if(l1->val < l2->val){
                *(current) = new ListNode(l1->val);
                l1 = l1->next;
            }
            else{
                *(current) = new ListNode(l2->val);
                l2 = l2->next;
            }
            current = &((*current)->next);
        }
        
        return answer;
    }
};