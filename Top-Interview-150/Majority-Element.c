int check_array(int* nums, int num, int numsSize)
{
    int i = 0;
    while (i < numsSize)
    {
        if (nums[i] == num)
            return(0);
        i++;
    }
    return(1);
}

int majorityElement(int* nums, int numsSize){
    int i  = 0;
    int j = 0;
    int again = 0;
    int max_again = 0;
    int res;
    while(i < numsSize)
    {
        if (check_array(nums, nums[i], i))
        {
            while (j < numsSize)
            {
                if (nums[j] == nums[i])
                    again++;
                j++;
            }
            if (max_again < again)
            {
                max_again = again;
                res = nums[i];
            }
            again = 0;
        }
        j = 0;
        i++;
    }
    return (res);
}   