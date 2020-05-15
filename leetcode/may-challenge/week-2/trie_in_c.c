#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


typedef struct _Trie{
    bool ends;
    struct _Trie *child[26];
} Trie;

/** Initialize your data structure here. */

Trie* trieCreate() {
    Trie* root = (Trie *)malloc(sizeof(Trie));
    root->ends = false;
    memset(root->child, 0, sizeof(root->child));
    return root;
}

/** Inserts a word into the trie. */
void trieInsert(Trie* obj, char * word) {
    Trie *ptr = obj;
    for (int i = 0; word[i] != '\0'; ++i) {
        int ch = word[i] - 'a';
        if (ptr->child[ch] == NULL) {
            ptr->child[ch] = trieCreate();
        }
        ptr = ptr->child[ch];
    }
    ptr->ends = 1;
}

/** Returns if the word is in the trie. */
bool trieSearch(Trie* obj, char * word) {
    Trie *ptr = obj;
    for (int i = 0; word[i] != '\0'; ++i) {
        int ch = word[i] - 'a';
        if (ptr->child[ch] == NULL) {
            return 0;
        }
        ptr = ptr->child[ch];
    }
    return ptr->ends;
}

/** Returns if there is any word in the trie that starts with the given prefix. */
bool trieStartsWith(Trie* obj, char * prefix) {
    Trie *ptr = obj;
    for (int i = 0; prefix[i] != '\0'; ++i) {
        int ch = prefix[i] - 'a';
        if (ptr->child[ch] == NULL) {
            return 0;
        }
        ptr = ptr->child[ch];
    }
    return 1;
}

void trieFree(Trie* obj) {
    for (int i = 0; i < 26; ++i) {
        if (obj->child[i]) {
            trieFree(obj->child[i]);
        }
    }
    free(obj);
}

/**
 * Your Trie struct will be instantiated and called as such:
 * Trie* obj = trieCreate();
 * trieInsert(obj, word);

 * bool param_2 = trieSearch(obj, word);

 * bool param_3 = trieStartsWith(obj, prefix);

 * trieFree(obj);
 */
