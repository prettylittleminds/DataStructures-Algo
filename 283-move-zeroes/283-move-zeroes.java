public class Solution {
    public void moveZeroes(int[] nums) {
        if (nums == null || nums.length == 0) return;
        
        int p1 = 0, p2 = 0;
        while (p1 < nums.length) {
            while (p2 < nums.length && nums[p2] != 0) p2++;
            while (p1 < nums.length && (nums[p1] == 0 || p1 < p2)) p1++;
            if (p1 == nums.length) return;
            nums[p2] = nums[p1];
            nums[p1] = 0;
        }
    }
}