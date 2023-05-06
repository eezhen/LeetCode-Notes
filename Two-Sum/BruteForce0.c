

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* returnNums = (int*)malloc(sizeof(int)*2);  
    for(int i=0; i<numsSize ; ++i){
        for(int j=i+1; j<numsSize ; ++j){
            if( target == nums[i]+nums[j] ){
                returnNums[0] = i, returnNums[1] = j;
                *returnSize = 2;
                return returnNums; 
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
