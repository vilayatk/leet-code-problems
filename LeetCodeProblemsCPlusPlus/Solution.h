#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>

class Solution
{
public:
	static std::vector<int> TwoSum(const std::vector<int>& nums, int target);
	static int FindLongestSubString(const std::string& s);
	static double MedianOfSortedArrays(const std::vector<int>& vec1, std::vector<int>& vec2);
};
