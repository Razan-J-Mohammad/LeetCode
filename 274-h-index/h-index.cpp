class Solution {
public:
    int hIndex(std::vector<int>& citations) {
        int temp = 0;
        int h = 0;
        int n = citations.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (citations[j] < citations[j + 1]) {
                    temp = citations[j];
                    citations[j] = citations[j + 1];
                    citations[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (citations[i] >= i + 1) {
                h = i + 1;
            } else {
                break;
            }
        }

        return h;
    }
};