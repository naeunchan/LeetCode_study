/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var reverseList = function(head) {
    if(!head){
        return head;
    }
    
    const arr = [];
    const answer = new ListNode();
    let point = answer;
    
    while(head){
        arr.push(head.val);
        head = head.next;
    }
    
    for(let i = 0; i < arr.length; i++){
        point.val = arr[arr.length - 1 - i];
        
        if(i < arr.length - 1){
            point.next = new ListNode();
            point = point.next;
        }
    }
    
    return answer;
};