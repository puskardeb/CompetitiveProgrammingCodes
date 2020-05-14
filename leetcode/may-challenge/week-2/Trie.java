class Trie {

    /** Initialize your data structure here. */

    static class TrieNode {
        public boolean ends;
        public TrieNode[] arr;

        public TrieNode() {
            arr = new TrieNode[26];
            Arrays.fill(arr, null);
            ends = false;
        }
    }

    TrieNode root;

    public Trie() {
        root = new TrieNode();
    }

    /** Inserts a word into the trie. */
    public void insert(String word) {
        TrieNode ptr = root;
        for (char ch : word.toCharArray()) {
            if (ptr.arr[ch - 'a'] == null) {
                ptr.arr[ch - 'a'] = new TrieNode();
            }
            ptr = ptr.arr[ch - 'a'];
        }
        ptr.ends = true;
    }

    /** Returns if the word is in the trie. */
    public boolean search(String word) {
        TrieNode ptr = root;
        for (char ch : word.toCharArray()) {
            if (ptr.arr[ch - 'a'] == null) {
                return false;
            }
            ptr = ptr.arr[ch - 'a'];
        }
        return ptr.ends;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    public boolean startsWith(String prefix) {
        TrieNode ptr = root;
        for (char ch : prefix.toCharArray()) {
            if (ptr.arr[ch - 'a'] == null) {
                return false;
            }
            ptr = ptr.arr[ch - 'a'];
        }
        return true;
    }
}

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * boolean param_2 = obj.search(word);
 * boolean param_3 = obj.startsWith(prefix);
 */
