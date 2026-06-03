class Solution {
public:
    int diagonalSum(vector<vector<int>>& accounts) {
        int sum = 0;
        int n = accounts.size();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i == j || i + j == n - 1) sum += accounts[i][j];
            }   
        }

        return sum;
    }
};
