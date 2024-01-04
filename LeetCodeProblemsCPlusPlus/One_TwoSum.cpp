#include "One_TwoSum.h"

#include <ios>

#include "algorithm"

std::vector<int> One_TwoSum::TwoSum(std::vector<int>& nums, int target)
{
	for (int i = 0; i < nums.size(); i++) {
		const auto& num1 = nums.at(i);
		const auto find_num = target - num1;
		const auto position =
			std::find(nums.begin() + i + 1, nums.end(), find_num) -
			nums.begin();

		if (position < nums.size())
			return { i, static_cast<int>(position) };
	}
	return {};
}
