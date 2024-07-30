

using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    string word;

    TrieNode() : word("") {}
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    void insert(const string& word) {
        TrieNode* node = root;
        for (char c : word) {
            if (node->children.find(c) == node->children.end()) {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
        }
        node->word = word;
    }
};

class Solution {
private:
    vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    unordered_set<string> resultSet;

    void backtrack(vector<vector<char>>& board, int row, int col, TrieNode* node) {
        char letter = board[row][col];
        TrieNode* currNode = node->children[letter];

        if (!currNode) return;

        if (currNode->word != "") {
            resultSet.insert(currNode->word);
        }

        board[row][col] = '#'; 
        for (vector<int>& dir : directions) {
            int newRow = row + dir[0];
            int newCol = col + dir[1];
            if (newRow >= 0 && newRow < board.size() && newCol >= 0 && newCol < board[0].size() && board[newRow][newCol] != '#') {
                backtrack(board, newRow, newCol, currNode);
            }
        }

        board[row][col] = letter; 
    }

public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie* trie = new Trie();
        for (const string& word : words) {
            trie->insert(word);
        }

        for (int row = 0; row < board.size(); ++row) {
            for (int col = 0; col < board[0].size(); ++col) {
                if (trie->root->children.find(board[row][col]) != trie->root->children.end()) {
                    backtrack(board, row, col, trie->root);
                }
            }
        }

        return vector<string>(resultSet.begin(), resultSet.end());
    }
};
