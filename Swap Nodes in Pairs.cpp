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
    ListNode* swapPairs(ListNode* head) {
        vector<int> v;
        int length = 1;
        ListNode * answer = new ListNode();
        ListNode * tail = answer;
        
        while(head != NULL){
            if(length % 2){
                v.push_back(head->val);
            } else{
                int tmp = v.back();
                v.pop_back();
                v.push_back(head->val);
                v.push_back(tmp);
            }
            length++;
            head = head->next;
        }
        
        for(int i = 0; i < v.size(); i++){
            tail->next = new ListNode(v[i]);
            tail = tail->next;
        }
        
        return answer->next;
    }
};