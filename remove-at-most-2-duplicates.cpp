#include <vector>
#include <iostream>
#include <map>

int removeDuplicates(std::vector<int>& nums)
{
    std::map<int, int> hash;

    int index = 0;
    for (const auto& n : nums) {
        if (hash[n] < 2) {
            nums[index++] = n;
            hash[n]++;
        }
    }
    return index;
}

int main()
{
	std::vector<int> nums = { 0,0,1,1,1,1,2,3,3 };
	std::cout << removeDuplicates(nums) << std::endl;

	for (const auto& n : nums)
	{
		std::cout << n << " ";
	}
	return 0;
}