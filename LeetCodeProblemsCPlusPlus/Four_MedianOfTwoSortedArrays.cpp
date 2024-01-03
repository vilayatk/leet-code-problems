#include "Four_MedianOfTwoSortedArrays.h"

#include <algorithm>

double Four_MedianOfTwoSortedArrays::MedianOfSortedArrays(std::vector<int>& vec1, std::vector<int>& vec2)
{
    double median;
    std::vector<int> merged_vec = vec1;

    merged_vec.insert(merged_vec.end(), vec2.begin(), vec2.end());

    std::sort(merged_vec.begin(), merged_vec.end());

    auto size = merged_vec.size();
    if (size % 2 == 0) {
        int m = size / 2;
        int n = m - 1;
        median = (merged_vec[m] + merged_vec[n]) * 0.5;
    }
    else {
        median = merged_vec[size / 2];
    }
    return median;
}
