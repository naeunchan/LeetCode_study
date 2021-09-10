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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        map<int, int> m;
        ListNode * answer = new ListNode();
        ListNode * tail = answer;
        
        for(int i = 0; i < lists.size(); i++){
            ListNode * head = lists[i];
            
            while(head != NULL){
                m[head->val]++;
                head = head->next;
            }
        }
        
        for(auto itr = m.begin(); itr != m.end(); itr++){
            for(int i = 0; i < itr->second; i++){
                tail->next = new ListNode(itr->first);
                tail = tail->next;
            }
        }
        
        return answer->next;
    }
};