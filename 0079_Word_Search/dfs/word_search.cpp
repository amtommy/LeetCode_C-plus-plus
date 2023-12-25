class Solution {
private: 
    // T: O(4 ^ N)
    bool findTargetword(vector<vector<char>>& board, string& word, int i, int j, int wordIndex){
        if(wordIndex == word.size()) return true;
        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[wordIndex]) return false;
        char temp = board[i][j];
        board[i][j] = '*';
        bool found = findTargetword(board, word, i + 1, j, wordIndex + 1) ||
                     findTargetword(board, word, i - 1, j, wordIndex + 1) ||
                     findTargetword(board, word, i, j + 1, wordIndex + 1) ||
                     findTargetword(board, word, i, j - 1, wordIndex + 1);
        board[i][j] = temp;
        return found;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); i++){ // T:O(N)
            for(int j = 0; j < board[0].size(); j++){ // T:O(N)
                if(findTargetword(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }
};