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
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        int front = 0, back = 0;
        
        while(head != NULL){
            v.push_back(head->val);
            head = head->next;
        }
        
        back = v.size() - 1;
        
        while(front <= back){
            if(v[front] != v[back]){
                return false;
            }
            front++;
            back--;
        }
        
        return true;
    }
};