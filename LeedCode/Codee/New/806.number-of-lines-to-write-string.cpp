/*
 * @lc app=leetcode id=806 lang=cpp
 *
 * [806] Number of Lines To Write String
 */

// @lc code=start
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 1;
        int width = 0;

        for(char ch : s){

            int w = widths[ch - 'a'];

            if(width + w <= 100){
                width += w;
            } else{
                lines++;
                width = w;
            }
        }

        return {lines,width};
    }
};