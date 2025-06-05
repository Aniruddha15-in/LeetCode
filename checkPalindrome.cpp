#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0;
        int int_max = 2147483647;
        int int_min = -2147483648;
        if (x<0 || (x%10 == 0 && x!=0)) return false;

        while(x>rev){
            if (rev > int_max/10 || (rev == int_max/10 && x%10 > 7)) return 0;
            if (rev < int_min/10 || (rev == int_min/10 && x%10 < -8)) return 0;            
            rev=rev*10+x%10;
            x=x/10;
        }

        return x==rev||x==rev/10;
    }
};

int main() {
    Solution sol;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(sol.isPalindrome(num)==true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}
