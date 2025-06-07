#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:

string fixString(string a){
    string m = "";
    int n = sizeof(a)/sizeof(a[0]);
    for (char c:a){
        if (isalnum(static_cast<unsigned char>(c))){
            m+=tolower(static_cast<unsigned char>(c));
        }
    }
    return m;
}
    bool isPalindrome(string s) {
        s=fixString(s);
        int n = s.size();
        for(int i=0; i<n/2; i++){
            if (s[i]!=s[n-1-i]){
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    string input = "";
    cout << "Enter a string: ";
    getline(cin, input);
    cout << (sol.isPalindrome(input) ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}