int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int *foundTwoSum = (int *)malloc(sizeof(int) * (*returnSize));
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = 0; j < numsSize; j++) {
            if ((nums[i] + nums[j]) == target && (i != j)) {
                foundTwoSum[0] = i;
                foundTwoSum[1] = j;
            }
        }
    }
    return foundTwoSum;
}
