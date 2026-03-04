int dominantIndex(int* nums, int numsSize) {
    
    int max1 = -1;
    int max2 = -1;
    int index = -1;
    
    for(int i = 0; i < numsSize; i++) {
        
        if(nums[i] > max1) {
            max2 = max1;
            max1 = nums[i];
            index = i;
        }
        else if(nums[i] > max2) {
            max2 = nums[i];
        }
    }
    
    if(max1 >= 2 * max2)
        return index;
    
    return -1;
}
