/*
 * @lc app=leetcode id=819 lang=cpp
 *
 * [819] Most Common Word
 */

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string,int> freq;

        for(char &ch : paragraph){

            if(isalpha(ch)){
                ch = tolower(ch);
            } else{
                ch = ' ';
            }
        }

        stringstream ss(paragraph);
        string word;

        while(ss >> word){

            if(ban.find(word) == ban.end()){
                freq[word]++;
            }
        }

        string ans = "";
        int mx = 0;

        for(auto x : freq){

            if(x.second > mx){
                mx = x.second;
                ans = x.first;
            }
        }

        return ans;
    }
};