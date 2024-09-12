// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem31.h"

using namespace std;
// @before-stub-for-debug-end

#include <bits/stdc++.h>
/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        for(int i = nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                int x = nums[i-1];
                nums[i-1]=nums[i];
                nums[i]=x;
                return;
            }
        }
        sort(nums.begin(), nums.end()); 

    }
};
// @lc code=end

