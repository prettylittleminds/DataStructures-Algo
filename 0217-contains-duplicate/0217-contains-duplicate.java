class Solution {
    public boolean containsDuplicate(int[] nums) {

        final Set<Integer> distinctSet = new HashSet<Integer>();

        for(int num : nums) {

            if(distinctSet.contains(num)) {
                return true;
            }

            distinctSet.add(num);
        }

        return false;
    }
}

