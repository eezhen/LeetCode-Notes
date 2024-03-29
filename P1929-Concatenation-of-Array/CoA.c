/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    int *ans = (int *)malloc(sizeof(int) * numsSize * 2);
    //memset(ans, 0, sizeof(int) * numsSize);
    for(int i=0 ; i<numsSize ; ++i){
        ans[i] = nums[i];
        ans[i+numsSize] = nums[i];
    }
    *returnSize = numsSize * 2;
    return ans;
}
