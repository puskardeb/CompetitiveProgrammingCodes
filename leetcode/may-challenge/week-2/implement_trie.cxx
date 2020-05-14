class TrieNode {
public:
    bool ends;
    TrieNode *child[26];
public:
    TrieNode() {
        ends = false;
        memset(child, NULL, sizeof(child));
    }
};


class Trie {
private:
    TrieNode *root;
private:
    void clear(TrieNode *root) {
        TrieNode *ptr = root;
        for (int i = 0; i < 26; ++i) {
            if (ptr->child[i]) {
                clear(ptr->child[i]);
            }
        }
        delete root;
    }
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }

    ~Trie() {
        clear(root);
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode *ptr = root;
        for (char c : word) {
            if (ptr->child[c - 'a'] == NULL) {
                ptr->child[c - 'a'] = new TrieNode();
            }
            ptr = ptr->child[c - 'a'];
        }
        ptr->ends = true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode *ptr = root;
        for (char c : word) {
            if (ptr->child[c - 'a'] == NULL) {
                return false;
            }
            ptr = ptr->child[c - 'a'];
        }
        return ptr->ends;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode *ptr = root;
        for (char c : prefix) {
            if (ptr->child[c - 'a'] == NULL) {
                return false;
            }
            ptr = ptr->child[c - 'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
