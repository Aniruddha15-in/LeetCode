#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        int int_max = 2147483647;
        int int_min = -2147483648;
        
        while (x != 0) {
            int rem = x % 10;

            if (rev > int_max / 10 || (rev == int_max / 10 && rem > 7)) return 0;
            if (rev < int_min / 10 || (rev == int_min / 10 && rem < -8)) return 0;

            rev = rev * 10 + rem;
            x /= 10;
        }

        return rev;
    }
};

int main() {
    Solution sol;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reversed: " << sol.reverse(num) << endl;
    return 0;
}
