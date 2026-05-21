/*
 * @lc app=leetcode id=2544 lang=cpp
 *
 * [2544] Alternating Digit Sum
 */

class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> digit;

        while(n){
            digit.push_back(n%10);
            n/=10;
        }

        reverse(digit.begin(),digit.end());

        int sum=0;
        int sign=1;

        for(int i=0;i<digit.size();i++){
            sum+=(digit[i]*sign);
            sign*=-1;
        }

        return sum;
    }
};