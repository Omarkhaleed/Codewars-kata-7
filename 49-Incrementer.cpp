#include <vector>
std::vector<int> incrementer(std::vector<int> nums){
if (nums.empty())
        return {};
    else
    {
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = nums[i] + i + 1;
            if (nums[i] >= 10)
            {
                nums[i] = nums[i] % 10;
            }
        }

    }

    return nums;
}
