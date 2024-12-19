#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool anagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        vector<int> freq(26, 0);
        for (int i=0; i<s.size(); i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for (int c : freq) {
            if (c != 0)
                return false;
        }
        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // brute force approach
        // if (strs.empty() || strs.size() == 1)
        //     return {{ strs }};

        // vector<vector<string>> ans;
        // vector<bool> visited(strs.size(), false);

        // for (int i=0; i<strs.size(); i++) {
        //     if (visited[i]) 
        //         continue;

        //     vector<string> temp;
        //     temp.push_back(strs[i]); 
        //     visited[i] = true;

        //     for (int j=i+1; j<strs.size(); j++) {
        //         if (anagram(strs[i], strs[j]) && !visited[j]){
        //             temp.push_back(strs[j]);
        //             visited[j] = true;
        //         }
        //     }

        //     ans.push_back(temp);
        // }
        // return ans;

        //unordered map approach
        // if (strs.empty() || strs.size() == 1)
        //     return {{ strs }};

        // unordered_map<string, vector<string>> map;

        // for (string x : strs) {
        //     string s = x;
        //     sort(s.begin(), s.end());
        //     map[s].push_back(x);
        // }

        // vector<vector<string>> ans;
        // for (auto m : map) {
        //     ans.push_back(m.second);
        // }

        // return ans;
    }
};
