#include <stdlib.h>

int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    
    int duplicate = -1;
    int missing = -1;
    
    for(int i = 0; i < numsSize; i++) {
        int index = abs(nums[i]) - 1;
        
        if(nums[index] < 0) {
            duplicate = abs(nums[i]);
        } else {
            nums[index] = -nums[index];
        }
    }
    
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] > 0) {
            missing = i + 1;
            break;
        }
    }
    
    int* result = (int*)malloc(2 * sizeof(int));
    result[0] = duplicate;
    result[1] = missing;
    
    *returnSize = 2;
    return result;
}
