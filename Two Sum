/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j;
    for(i = 0; i < numsSize; i++){
        for(j = (i + 1); j < numsSize; j++){
            if(target == *(nums + i) + *(nums + j)){
                memset(nums , 0, sizeof(int) * numsSize);
                *nums = i;
                *(nums + 1) = j;
                *returnSize = 2;
                return nums;
            }
        }
    }
    return nums;
    
}
