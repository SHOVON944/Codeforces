/*
 * @lc app=leetcode id=303 lang=cpp
 *
 * [303] Range Sum Query - Immutable
 */

// @lc code=start
class NumArray {
public:
    vector<int> prefix;

    NumArray(vector<int>& nums) {
        prefix.resize(nums.size()+1);
        prefix[0] = 0;
        for(int i = 0; i < nums.size(); i++){
            prefix[i+1] = prefix[i] + nums[i];
        }
    }

    int sumRange(int left, int right) {
        return prefix[right+1] - prefix[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */