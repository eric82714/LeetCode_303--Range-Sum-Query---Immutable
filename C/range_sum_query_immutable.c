typedef struct {
    int* histArray;
} NumArray;


NumArray* numArrayCreate(int* nums, int numsSize) {
    NumArray* obj = malloc(sizeof(NumArray));
    obj->histArray = nums;
    
    for(int i = 1; i < numsSize; i++)
        obj->histArray[i] = obj->histArray[i] + obj->histArray[i-1];
    
    return obj;
}

int numArraySumRange(NumArray* obj, int i, int j) {
    if(i == 0) return obj->histArray[j];
        return obj->histArray[j] - obj->histArray[i-1];
}

void numArrayFree(NumArray* obj) {
    
}

/**
 * Your NumArray struct will be instantiated and called as such:
 * NumArray* obj = numArrayCreate(nums, numsSize);
 * int param_1 = numArraySumRange(obj, i, j);
 
 * numArrayFree(obj);
*/
