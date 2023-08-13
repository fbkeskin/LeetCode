/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i, j;
    int* indicies;

    i = 0;
    *returnSize = 2;
    indicies = (int* )malloc(*returnSize * sizeof(int));
    while (i < numsSize)
    {
        j = i + 1;
        while (j < numsSize)
        {
            if (nums[i] + nums[j] == target)
            {
                indicies[0] = i;
                indicies[1] = j;
                break;
            }
            j++;
        }
        i++;
    }
    return indicies;
}