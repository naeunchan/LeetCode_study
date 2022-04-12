var mergeNodes = function(head) {
    const answer = new ListNode();
    const arr =[];
    let current = head;
    let sum = 0;
    
    while(current !== null){
        if(current.val !== 0){
            sum += current.val;
        } else{
            if(sum !== 0){
                arr.push(sum);
                sum = 0;
            }
        }
        current = current.next;
    }
    
    current = answer;
    
    for(let i = 0; i < arr.length; i++){
        current.val = arr[i];
        
        if(i < arr.length - 1){
            current.next = new ListNode();
            current = current.next;
        }
    }
    
    return answer;
};