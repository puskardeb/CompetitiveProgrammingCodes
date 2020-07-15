class Solution {
    public Node recur(Node ptr) {
        Node currentNode = ptr;
        Node nextNode = null;
        Node lastNode = null;

        while (currentNode.next != null) {
            if (currentNode.child != null) {
                nextNode = currentNode.next;
                currentNode.next = currentNode.child;
                lastNode = recur(currentNode.child);
                lastNode.next = nextNode;
                nextNode.prev = lastNode;
                currentNode.child.prev = currentNode;
                currentNode.child = null;
                currentNode = nextNode;
            } else {
                currentNode = currentNode.next;
            }
        }

        return currentNode;
    }

    public Node flatten(Node head) {
        if (head == null) {
            return null;
        }

        Node lastNode = recur(head);
        Node currentNode = null;

        while (lastNode.child != null) {
            currentNode = lastNode.child;
            currentNode.prev = lastNode;
            lastNode.next = currentNode;
            lastNode.child = null;
            lastNode = currentNode;
        }
        return head;
    }
}
