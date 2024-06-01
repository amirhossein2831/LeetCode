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

        for (auto i = nums.begin(); i < nums.end(); i++) {                         // for (int i = 0; i < nums.size(); i++) {
            auto j = find(i + 1, nums.end(), target - *i);           // for (int j = i + 1; j < nums.size(); j++) {
            if (j != nums.end()) {                                                           // if (nums[i] + nums[j] == target) {
                res.push_back(i - nums.begin());                                             // res.push_back(i);
                res.push_back(j - nums.begin());                                             // res.push_back(j);
                break;                                                                       //          }
            }                                                                                //      }
        }                                                                                    // }

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