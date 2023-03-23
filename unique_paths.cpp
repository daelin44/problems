class Solution {
public:
    int uniquePaths(int m, int n) {
        int* squares = new int[m*n];
        squares[0] = 1;
        for(int i = 1; i < m*n; i++)
        {
            squares[i] = ( (i % n) ? squares[i-1] : 0) + ((i>(n-1)) ? squares[i-n] : 0);
        }
        return squares[m*n-1];
    }
};