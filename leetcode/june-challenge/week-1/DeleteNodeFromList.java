class Solution {
    public void deleteNode(ListNode node) {
        //not a good problem, really
        ListNode ptr = node;
        ListNode prevPtr = node;

        while (ptr.next != null) {
            int tmp = ptr.val;
            ptr.val = ptr.next.val;
            ptr.next.val = tmp;
            prevPtr = ptr;
            ptr = ptr.next;
        }
        prevPtr.next = null;
    }
}
