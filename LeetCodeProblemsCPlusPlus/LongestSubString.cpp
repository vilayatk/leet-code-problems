#include "LongestSubString.h"

#include <unordered_set>

int LongestSubString::FindLongestSubString(const std::string& s)
{
	std::unordered_set<char> un_set;
	int left = 0;
	int max_length = 0;
	for(int right = 0; right < s.length(); right++)
	{
		const auto& character = s[right];
		if (un_set.count(character) == 0)
		{
			un_set.insert(character);
			max_length = std::max(max_length, right - left + 1);
		}
		else
		{
			while(un_set.count(character) != 0)
			{
				un_set.erase(s[left]);
				left++;
			}
			un_set.insert(character);
		}
	}
	return max_length;
}
