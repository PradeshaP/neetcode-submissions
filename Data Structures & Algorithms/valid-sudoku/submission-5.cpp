class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Track digits already seen in each row, column, and 3x3 box.
        bool rows[9][10] = {};
        bool cols[9][10] = {};
        bool boxes[9][10] = {};

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                char cell = board[r][c];

                if (cell == '.') {
                    continue;
                }

                int digit = cell - '0';
                int boxIndex = (r / 3) * 3 + (c / 3);

                // The digit already exists in this row, column, or box.
                if (rows[r][digit] ||
                    cols[c][digit] ||
                    boxes[boxIndex][digit]) {
                    return false;
                }

                rows[r][digit] = true;
                cols[c][digit] = true;
                boxes[boxIndex][digit] = true;
            }
        }

        return true;
    }
};