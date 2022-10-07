class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        int size = heights.length;
        boolean swapped = false;
        for (int i = 0; i < size; i++) {
            for (int j = 1; j < size - i; j++) {
                if (heights[j] > heights[j-1]) {
                    int temp1 = heights[j];
                    heights[j] = heights[j-1];
                    heights[j-1] = temp1;
                    
                    String temp2 = names[j];
                    names[j] = names[j-1];
                    names[j-1] = temp2;

                    swapped = true;
                }
            }
            if (!swapped)
                break;
        }
        return names;
        
    }
}