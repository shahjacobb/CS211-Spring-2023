#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {1,2,3,4,5,6};
    for (int i : nums)
    {
        std::cout << i << "\n";
    }

    for (int i = 0; i < nums.size(); i++)
    {
        std::cout << nums[i] << " ";
    }
}