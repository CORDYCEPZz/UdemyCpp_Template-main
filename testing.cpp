#include <iostream>
#include <cstdint>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <string>
#include <string_view>
#include <utility>
#include <algorithm>
#include <random>

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    auto output = std::vector<int>{};
    for(int i = 0; i<nums.size(); i++)
    {
        for(int j = 0; j<nums.size(); j++)
        {
            if((nums[i] + nums[j]) == target)
            {
                output.push_back(i);
                output.push_back(j);
                return output;
            }
        }
    }
    return output;
}

int main()
{
    std::vector test = {1,2,3,4};
    auto res = twoSum(test, 6);
    std::cout << res[0] <<" "<<res[1]<< "\n";

    return 0;
}
