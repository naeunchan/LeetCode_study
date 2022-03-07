class Solution{
    constructor(nums){
        this.original = [...nums];
        this.nums = nums;
    }
    
    reset() {
        this.nums = [...this.original];

        return this.nums;
    }
    
    shuffle() {
        for(let i = this.nums.length - 1; i > 0; i--){
            const random = Math.floor(Math.random() * (i + 1));
            
            [this.nums[i], this.nums[random]] = [this.nums[random], this.nums[i]];
        }

        return this.nums;
    }
};