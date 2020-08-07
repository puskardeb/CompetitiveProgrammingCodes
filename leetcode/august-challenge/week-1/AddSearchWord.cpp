struct Trie {
    int end;
    struct Trie *node[26];
    
    Trie() {
        end = 0;
        for (int i = 0; i < 26; ++i) {
            node[i] = nullptr;
        }
    }
};


class WordDictionary {
public:
    Trie *root;
    WordDictionary() {
        root = new Trie();
    }
    
    void clear(Trie *n) {
        for (int i = 0; i < 26; ++i) {
            if (n->node[i]) {
                clear(n->node[i]);
            }
        }
        delete n;
    }
    
    ~WordDictionary() {
        clear(root);
    }
    
    void addWord(string word) {
        Trie *ptr = root;
        for (int i = 0; i < word.size(); ++i) {
            int ch = word[i] - 'a';
            if (ptr->node[ch] == nullptr) {
                ptr->node[ch] = new Trie();
            }
            ptr = ptr->node[ch];
        }
        ptr->end = 1;
    }
    
    bool search(string word) {
        return dfs(word, 0, root);
    }
    
    bool dfs(string word, int idx, Trie *n) {
        if (idx == word.size()) return n->end;
        if (word[idx] != '.') {
            return n->node[word[idx] - 'a'] && dfs(word, idx + 1, n->node[word[idx] - 'a']);
        }
        for (int i = 0; i < 26; ++i) {
            if (n->node[i]) {
                if (dfs(word, idx + 1, n->node[i])) {
                    return 1;
                }
            }
        }
        return 0;
    }
};
