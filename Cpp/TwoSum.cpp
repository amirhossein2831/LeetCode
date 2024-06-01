#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:

    // Solution1 O(n2)
    static vector<int> twoSum1(vector<int> &nums, int target) {
        vector<int> res;

        for (auto i = nums.begin(); i < nums.end(); i++) {
            auto j = find(i + 1, nums.end(), target - *i);
            if (j != nums.end()) {
                res.push_back(i - nums.begin());
                res.push_back(j - nums.begin());
                break;
            }
        }

        return res;
    }


    // Solution2 O(n)
    static vector<int> twoSum2(vector<int> &nums, int target) {
        vector<int> res;
            unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            auto it = m.find(target - nums[i]);
            if (it != m.end()) {
                return {it->second, i};
            }
            m[nums[i]] = i;
        }
        return res;
    }
};