class Solution {
    public int maxProfit(int[] prices) {
        if (prices == null || prices.length < 2) return 0;
        int maxProfit = 0, minPrice = prices[0];
        for (int i = 1; i < prices.length; i++) {
            if (prices[i] > minPrice) maxProfit = Math.max(maxProfit, prices[i] - minPrice);
            else minPrice = prices[i];
        }
        return maxProfit > 0 ? maxProfit : 0;
    }
}