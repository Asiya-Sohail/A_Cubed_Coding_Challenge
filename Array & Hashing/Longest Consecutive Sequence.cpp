#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Brute Force Approach
        // if (nums.size() == 0 || nums.size() == 1) 
        //     return nums.size();
        // vector<int> res(nums.size(), 1);
        // sort(nums.begin(), nums.end());
        // for (int i=0; i<nums.size(); i++) {
        //     int key = nums[i];
        //     for (int j=i+1; j<nums.size(); j++) {
        //         if (nums[j] == key)
        //             continue;
        //         if (nums[j] == ++key){
        //             res[i]++;
        //         } else break;
        //     }
        // }
        
        // int max = INT_MIN;
        // for (int i : res){
        //     if (max < i)
        //         max = i;
        // }
        // return max;

        // Use Heap DS
        // if (nums.empty()) 
        //     return 0;
        // priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
        // int longest = 1, current = 1;
        // int prev = pq.top();
        // pq.pop();
        // while (! pq.empty()) {
        //     int curr = pq.top(); pq.pop();
        //     if (curr == prev+1)
        //         current++;
        //     else if (curr != prev) {
        //         longest = max(longest, current);
        //         current = 1;
        //     }
        //     prev = curr;
        // }
        // return max(longest, current);

        // Use Unordered_map (solved but not efficient)
        // unordered_map<int, bool> mp;
        // for (int i : nums) {
        //     mp[i] = true;
        // } 
        // for (int i : nums) {
        //     if (mp.count(i-1) > 0)
        //         mp[i] = false;
        // }
        // int maxlen = 0;
        // for (int i=0; i<nums.size(); i++) {
        //     if (mp[nums[i]] == true) {
        //         int j=0, count=0;
        //         while(mp.count(nums[i] + j) > 0){
        //             count++; j++;
        //         }
        //         if (count > maxlen)
        //             maxlen = count;
        //     }
        // }
        // return maxlen;

        // Use unordered set
        // unordered_set<int> set;
        // for (int i : nums) {
        //     set.insert(i);
        // } 
        // int longest = 0;
        // for (int i : nums) {
        //     if (set.find(i - 1) == set.end()){ //No shorter number found (Mean start of series)
        //         int curr = i; //current number
        //         int current = 1; //current sequence length
        //         while (set.find(curr + 1) != set.end()) {
        //             curr++;
        //             current++;
        //         }
        //         longest = max(longest, current);
        //     }
        // }
        // return longest;
    }
};
