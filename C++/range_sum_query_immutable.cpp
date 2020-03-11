class NumArray {
public:
    vector<int> histArray;
    
    NumArray(vector<int>& nums) {
        histArray = nums;
        for(int i = 1; i < nums.size(); i++) 
            histArray[i] += histArray[i-1]; 
    }
    
    int sumRange(int i, int j) {
        if(i == 0) return histArray[j];
        return histArray[j] - histArray[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
