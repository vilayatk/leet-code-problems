/*Given an integer array nums and an integer val, remove all occurrences of val in nums in - place
The order of the elements may be changed.Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things :

Change the array nums such that the first k elements of nums contain the elements which are not equal to val
The remaining elements of nums are not important as well as the size of nums.
Return k.*/

#include <vector>
#include <iostream>

int removeElement(std::vector<int>& nums, int val)
{
	std::vector<int> num_temp;
	num_temp.reserve(nums.size());
	for (const auto& n : nums)
	{
		if (n != val)
		{
			num_temp.push_back(n);
		}
	}
	auto k = num_temp.size();
	num_temp.resize(nums.size());
	nums = num_temp;
	return k;
}

//int main()
//{
//	std::vector<int> nums = { 0,1,2,2,3,0,4,2 };
//	std::cout << removeElement(nums, 2) << "\n";
//
//	for (const auto& n : nums)
//	{
//		std::cout << n << "  ";
//	}
//	return 0;
//}