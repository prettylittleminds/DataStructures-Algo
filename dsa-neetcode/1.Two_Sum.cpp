/*https://leetcode.com/problems/two-sum/

Input: 
[2,7,11,15]
9

Output:
[0,1]

Time Complexity: O(N)
Space Complexity: O(N)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(int i=0; i<nums.size();i++){
            if(mpp.find(target-nums[i])!=mpp.end()){
                ans.push_back(mpp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mpp[nums[i]]=i;
        }
        return ans;
    }
         
};

*/

//Optimised(Readable):
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};
        unordered_map<int, int> diff_map;
        
        for(int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if(diff_map.find(diff) != diff_map.end()) {
                ans[0] = diff_map[diff];
                ans[1] = i;
                return ans;
            }
            diff_map[nums[i]] = i;
        }
        
        return ans;
    }
         
};


