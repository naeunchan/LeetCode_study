/**
 * @param {number} h
 * @param {number} w
 * @param {number[]} horizontalCuts
 * @param {number[]} verticalCuts
 * @return {number}
 */
const getMaxDiff = (arr, start, end, diff, length) => {
    for(let i = 1; i < arr.length; i++){
        const tmpStart = arr[i - 1];
        const tmpEnd = arr[i];
        const tmpDiff = tmpEnd - tmpStart;
        
        diff = diff < tmpDiff ? tmpDiff : diff;
    }
    
    return diff < length - arr[arr.length - 1] ? length - arr[arr.length - 1] : diff;
};

const maxArea = (h, w, horizontalCuts, verticalCuts) => {
    const MOD = BigInt(1000000007);
    let rowDiff = 0;
    let colDiff = 0;
    
    horizontalCuts.sort((a, b) => a - b);
    verticalCuts.sort((a, b) => a - b);
    
    rowDiff = horizontalCuts[0];
    colDiff = verticalCuts[0];
    
    rowDiff = getMaxDiff(horizontalCuts, 0, rowDiff, rowDiff, h);
    colDiff = getMaxDiff(verticalCuts, 0, colDiff, colDiff, w);
    
    return (BigInt(rowDiff) * BigInt(colDiff)) % MOD;
};