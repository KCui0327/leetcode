void sortColors(int* nums, int numsSize){
    int top, target, i;
    for (top = 1; top < numsSize; top++) {
        target = nums[top];
        i = top - 1;
        
        while (i >= 0 && nums[i] > target) {
            nums[i + 1] = nums[i];
            i--;
        }
        nums[i + 1] = target;
    }
}
