int removeDuplicates(int* nums, int numsSize){
    int i = 0;
    int j = 0;
    int val = 9999;
    while (j < numsSize)
    {
        if (nums[j] == val)
            j++;
        else
        {
            nums[i] = nums[j];
            if(nums[j] !=val)
                val = nums[j];
            i++;
            j++;
        }
    }
    return (i);
}