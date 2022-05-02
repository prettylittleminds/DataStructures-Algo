
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> map;

    for (int i = 0; i < nums.size(); i++) {

        if (map.count(nums[i])) {
            return true;
        }
        else {
            map[nums[i]] = true;
        }
    }return false;
        
}
};

/*

Input:
[1,2,3,1]
[1,2,3,4]

Output:
true
false

Time Complexity: O(N)
Space Complexity: O(N)*/