#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool firstRow=false, firstCol=false;
        
        for (int i=0;i<matrix.size();i++){
            for (int j=0;j<matrix[0].size();j++){
                if (matrix[i][j]==0){
                    if (i==0){
                        firstRow=true;
                    }
                    if (j==0){
                        firstCol=true;
                    }
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        
        for (int i=1;i<matrix.size();i++){
            for (int j=1;j<matrix[0].size();j++){
                if (matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }

        if (firstRow){
            for(int j=0;j<matrix[0].size();j++){
                matrix[0][j]=0;
            }
        }

        if (firstCol){
            for(int i=0;i<matrix.size();i++){
                matrix[i][0]=0;
            }
        }
        
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    sol.setZeroes(matrix);

    cout << "Matrix after setting zeroes: " << endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}