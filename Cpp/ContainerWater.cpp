#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:

    // Solution1 O(n2)
    static int maxArea1(vector<int> &height) {
        int max = 0;
        for (auto i = 0; i < height.size() - 1; i++) {
            for (auto j = i + 1; j < height.size(); j++) {
                int w = j - i;
                int h = height[i] < height[j] ? height[i] : height[j];
                if (h * w > max) {
                    max = h * w;
                }
            }
        }
        return max;
    }


    // Solution2 O(n)
    static int maxArea2(vector<int> &height) {
        int res = 0, l = 0, r = height.size() - 1;

        while (l < r) {
            auto h = min(height[l], height[r]);
            auto w = r - l;
            res = max(res, h * w);
            if (height[l] < height[r])
                l++;
            else
                r--;
        }
        return res;
    }
};