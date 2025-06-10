#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i;
        int red=0, white=0, blue=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0){
                red++;
            }
            else if(nums[i]==1){
                white++;
            }
            else if(nums[i]==2){
                blue++;
            }
        }

        for(i=0;i<red;i++){
            nums[i]=0;
        }
        for(i=red;i<red+white;i++){
            nums[i]=1;
        }
        for(i=red+white;i<red+white+blue;i++){
            nums[i]=2;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    sol.sortColors(nums);

    cout << "Sorted colors: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}