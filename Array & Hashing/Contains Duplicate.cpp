#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //Brute Force Approach
        // sort(nums.begin(), nums.end());
        // for (int i=0; i<nums.size(); i++) {
        //     for (int j= i+1; j<nums.size(); j++){
        //         if (nums[i] == nums[j])
        //             return true;
        //     }
        // }
        // return false;

        //Two Pointer Approach
        // sort(nums.begin(), nums.end());
        //     int left , right;
        //     left = nums[0];
        //     for (int i=1; i<nums.size(); i++) {
        //         right = nums[i];
        //         if (left == right)
        //             return true;
        //         else;
        //             left = nums[i];
        //     }
        //     return false;
        // }

        //unordered sets
        // unordered_set<int> s;
        // for (int i : nums) {
        //     if (s.find(i) != s.end())
        //         return true;
        //     else 
        //         s.insert(i);
        // }
        // return false;
    }
};
