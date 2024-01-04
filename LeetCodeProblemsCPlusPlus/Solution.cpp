#include "Solution.h"
#include <stdexcept>

std::vector<int> Solution::TwoSum(const std::vector<int>& nums, int target)
{
	for (int i = 0; i < nums.size(); i++) {
		const auto& num1 = nums.at(i);
		const auto find_num = target - num1;
		const int position =
			static_cast<int>(std::find(nums.begin() + i + 1, nums.end(), find_num) -
				nums.begin());

		if (position < static_cast<int>(nums.size()))
			return { i, position };
	}
	throw std::runtime_error("Pair not found");
}

int Solution::FindLongestSubString(const std::string& s)
{
	std::unordered_set<char> un_set;
	int left = 0;
	int max_length = 0;
	for (int right = 0; right < s.length(); right++)
	{
		const auto& character = s[right];
		if (un_set.count(character) == 0)
		{
			un_set.insert(character);
			max_length = std::max(max_length, right - left + 1);
		}
		else
		{
			while (un_set.count(character) != 0)
			{
				un_set.erase(s[left]);
				left++;
			}
			un_set.insert(character);
		}
	}
	return max_length;
}

double Solution::MedianOfSortedArrays(const std::vector<int>& vec1, std::vector<int>& vec2)
{
	double median;
	std::vector<int> merged_vec = vec1;

	merged_vec.insert(merged_vec.end(), vec2.begin(), vec2.end());

	std::sort(merged_vec.begin(), merged_vec.end());

	const auto size = merged_vec.size();
	if (size % 2 == 0) {
		const int m = static_cast<int>(size / 2);
		const int n = m - 1;
		median = (merged_vec[m] + merged_vec[n]) * 0.5;
	}
	else {
		median = merged_vec[size / 2];
	}
	return median;
}
