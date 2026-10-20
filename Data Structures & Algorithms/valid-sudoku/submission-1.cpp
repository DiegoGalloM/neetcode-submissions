class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> columns;
        unordered_map<int, unordered_set<char>> boxes;

        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                char cell = board[i][j];
                if (cell == '.'){
                    continue;
                }

                int box = (i/3)*3 + (j/3);

                if(rows[i].count(cell) || columns[j].count(cell) || boxes[box].count(cell)){
                    return false;
                }

                rows[i].insert(cell);
                columns[j].insert(cell);
                boxes[box].insert(cell);
            }

        }
        return true;
    }
};
