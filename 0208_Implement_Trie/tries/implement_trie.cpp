class TrieNode{
public:
    map<char, TrieNode*> children;
    bool isEndOfWord;
    TrieNode(){
        isEndOfWord = false;
    } 
};
class Trie {
private:
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* node = root;
        for(int i = 0; i < word.size(); i++){
            char c = word[i];
            if(node->children.find(c) == node->children.end()){
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
        }
        node->isEndOfWord = true;
    }

    bool search(string word) {
        return searchHelper(root, word, 0);
    }

    bool searchHelper(TrieNode* root, string word, int index){
        if(index == word.size()) return root->isEndOfWord;

        char c = word[index];
        if(root->children.find(c) == root->children.end()){
            return false;
        }
        TrieNode* child = root->children[c];
        return searchHelper(child, word, index+1);
    }

    bool startsWith(string prefix) {
        return startsWithHelper(root, prefix, 0);
    }
    bool startsWithHelper(TrieNode* root, string prefix, int index){
        if(index == prefix.size()) return true;

        char c = prefix[index];
        if(root->children.find(c) == root->children.end()){
            return false;
        }
        TrieNode* child = root->children[c];
        return startsWithHelper(child, prefix, index+1);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */