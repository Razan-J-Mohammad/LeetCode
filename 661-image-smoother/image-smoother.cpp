class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        
    int rows = img.size();
    int cols = img[0].size();
    std::vector<std::vector<int>> smooth(rows, std::vector<int>(cols, 0));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int sum = 0;
            int count = 0;

            for (int r = i - 1; r <= i + 1; ++r) {
                for (int c = j - 1; c <= j + 1; ++c) {
                    if (r >= 0 && r < rows && c >= 0 && c < cols) {
                        sum += img[r][c];
                        count++;
                    }
                }
            }

            smooth[i][j] = std::floor(sum / count);
        }
    }

    return smooth;
    }
};