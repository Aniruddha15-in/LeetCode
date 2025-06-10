#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int select=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                select=nums[i];
            }
            if(nums[i]==select){
                count++;
            }
            else{
                count--;
            }
        }
        return select;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 3};

    int result = sol.majorityElement(nums);

    cout << "The majority element is: " << result << endl;

    return 0;
}