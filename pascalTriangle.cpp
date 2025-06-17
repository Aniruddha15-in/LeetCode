#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});
        for(int i=0;i<numRows-1;i++){
            vector<int> dumRow = {0};
            dumRow.insert(dumRow.end(), res.back().begin(),res.back().end());
            dumRow.push_back(0);
            vector<int> row;
            for(int j=0;j<dumRow.size()-1;j++){
                row.push_back(dumRow[j]+dumRow[j+1]);
            }

            res.push_back(row);
        }

        return res;
    }
};

int main() {
    Solution sol;
    int numRows = 8;

    vector<vector<int>> result = sol.generate(numRows);

    cout << "Pascal's Triangle with " << numRows << " rows:" << endl;
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}