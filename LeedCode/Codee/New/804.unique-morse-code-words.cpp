/*
 * @lc app=leetcode id=804 lang=cpp
 *
 * [804] Unique Morse Code Words
 */

// @lc code=start
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {    // also use AI for String(morse)
            ".-","-...","-.-.","-..",".","..-.","--.","....",
            "..",".---","-.-",".-..","--","-.","---",".--.",
            "--.-",".-.","...","-","..-","...-",".--","-..-",
            "-.--","--.."
        };

        set<string> st;

        for(string word : words){

            string temp = "";

            for(char ch : word){
                temp += morse[ch - 'a'];
            }

            st.insert(temp);
        }

        return st.size();
    }
};