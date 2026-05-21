/*
 * @lc app=leetcode id=3046 lang=cpp
 *
 * [3046] Split the Array
 */

class Solution {
public:

    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int x : nums){
            mp[x]++;

            if(mp[x] > 2){
                return false;
            }
        }

        return true;
    }
};