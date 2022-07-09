int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int *resultArr = (int *)malloc(sizeof(int) * (*returnSize)), count = 0, currentIndex;
    
    for (int i = 0; i < *returnSize; i++) {
        currentIndex = nums[i];
        for (int j = 0; j < *returnSize; j++) {
            if (currentIndex > nums[j])
                count++;
        }
        resultArr[i] = count;
        count = 0;
    }
    return resultArr;
}
