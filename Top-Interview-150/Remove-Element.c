int removeElement(int* nums, int numsSize, int val){
    int k = numsSize - 1;
    int i = 0;
    while (i <= k)
    {
        if (nums[i] == val)
        {
            nums[i] = nums[k];
            k--;
        }
        else
            i++;
    }
    return (k + 1);
}