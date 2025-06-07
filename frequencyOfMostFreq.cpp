#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = 0;
        int result = 0;
        long total = 0;
        int len = nums.size();

        while (j < len) {
            long target = nums[j];
            total += target;
            while (target * (j - i + 1) > total + k) {
                total -= nums[i];
                i++;
            }
            result = max(result, j - i + 1);
            j++;
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 4};
    int k = 5;
    cout << "Maximum frequency: " << sol.maxFrequency(nums, k) << endl;
    return 0;
}
