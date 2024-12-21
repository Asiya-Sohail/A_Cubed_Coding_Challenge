#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
    vector<int> sizes;
public:
    string encode(vector<string>& strs) {
        sizes.clear();
        string ans = "";
        for (string s : strs) {
            ans += s;
            sizes.push_back(s.size());
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int count = 0;
        for (int i=0; i<sizes.size(); i++) {
            string str = s.substr(count, sizes[i]);
            ans.push_back(str);
            count += sizes[i];
        }
        return ans;
    }
};