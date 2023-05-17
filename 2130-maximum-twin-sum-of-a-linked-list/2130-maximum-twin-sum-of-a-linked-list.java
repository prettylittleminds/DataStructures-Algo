/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 
class Solution {
    public int pairSum(ListNode head) {
        ListNode current = head;
        while (current != null) {
            int[] twinSums = new int[20];
            for (int i = 0; i < twinSums.length; i++) {
                twinSums[i] = current.val + n-1-i;
            }
            twinSums
            if (current.val <= ((n/2) - 1)
        }
        
    }
}
*/

class Solution {
    public int pairSum(ListNode head) {
        ArrayList<Integer>  arr = new ArrayList<Integer>();
        while(head != null)
        {
            arr.add(head.val);
            head = head.next;
        }
        int i = 0;
        int j = arr.size() - 1;
        int maxtwinsum = 0;
        while(i <= j)
        {
            maxtwinsum = Math.max(arr.get(i) + arr.get(j), maxtwinsum);
            i++;
            j--;
        }
        return maxtwinsum;
    }
}