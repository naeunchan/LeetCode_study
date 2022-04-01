var findCheapestPrice = function(n, flights, src, dst, k) {
    const graph = Array.from({length: n}, () => []);
    const dist = Array(n).fill(Infinity);
    const queue = [];
    
    for(let i = 0; i < flights.length; i++){
        const [from, to, price] = flights[i];
        
        graph[from].push([to, price]);
    }
    
    queue.push([src, 0, 0]);
    dist[src] = 0;
    
    while(queue.length){
        const [current, cost, stop] = queue.shift();
        
        for(let i = 0; i < graph[current].length; i++){
            const [next, price] = graph[current][i];
            const nextCost = cost + price;
            
            if(dist[next] > nextCost && stop <= k){
                dist[next] = nextCost;
                queue.push([next, nextCost, stop + 1]);
            }
        }
    }
    
    return dist[dst] === Infinity ? -1 : dist[dst];
};