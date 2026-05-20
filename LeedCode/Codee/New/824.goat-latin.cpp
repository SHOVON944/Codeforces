/*
 * @lc app=leetcode id=824 lang=cpp
 *
 * [824] Goat Latin
 */

class Solution {
public:
    string toGoatLatin(string sentence) {
        unordered_set<char> vowel = {
            'a','e','i','o','u',
            'A','E','I','O','U'
        };

        stringstream ss(sentence);
        string word, ans = "";
        string addA = "a";

        int cnt = 1;

        while(ss >> word){

            if(vowel.find(word[0]) != vowel.end()){
                word += "ma";
            } else{
                char first = word[0];
                word.erase(word.begin());
                word += first;
                word += "ma";
            }

            word += addA;

            if(cnt > 1){
                ans += " ";
            }

            ans += word;

            addA += "a";
            cnt++;
        }

        return ans;
    }
};