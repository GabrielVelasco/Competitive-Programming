

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* vet = (int*) malloc(2*sizeof(int));
    int i, j;
    for(i = 0; i < numsSize; i++){
        for(j = i + 1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                vet[0] = i; vet[1] = j;
                *returnSize = 2;
                return vet;
            }
        }
    }
    
    return vet;
}