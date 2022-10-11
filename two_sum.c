/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j;
    for(i = 0; i < numsSize; i++){
        for(j = (i + 1); j < numsSize; j++){
            if(target == *(nums + i) + *(nums + j)){
                //memset(nums, 0,sizeof(int) * numsSize);
                *nums = i;
                *(nums + 1) = j;
                *returnSize = 2;
                return nums;
            }
        }
    }
    return nums;
    
}

void main()
{
	int nums[4] = {0,2,4,0}, target = 0;
	int i, numsSize = 3, returnSize = 2;
    
    twoSum(&nums[0], numsSize, target, &returnSize);
/*	for(i= 0; i < returnSize; i++){
    	    printf("output: [%d] \r\n", nums[i]);
    }
*/
}
