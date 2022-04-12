var flatten = function(head) {
    const arr = [];
    let current = head;
    let answer;
    
    const dfs = (node) => {
        arr.push(new Node(node.val));
        
        if(node.child !== null){
            dfs(node.child);
        }
        
        if(node.next !== null){
            dfs(node.next);
        }
    }
    
    if(!head){
        return head;
    }
    
    dfs(current);
    
    answer = arr[0];
    
    for(let i = 0; i < arr.length; i++){
        if(i < arr.length - 1){
            arr[i].next = arr[i + 1]; 
        }
        
        if(i > 0){
            arr[i].prev = arr[i - 1];
        }
    }
    
    return answer;
};