/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
class Solution {
public:
    int firstBadVersion(int n) {
        long long l = 1;
        long long r = n;
        int ans = n;

        while(l <= r){

            long long mid = l + (r - l) / 2;

            if(isBadVersion(mid)){
                ans = mid;
                r = mid - 1;
            } else{
                l = mid + 1;
            }
        }

        return ans;
    }
};