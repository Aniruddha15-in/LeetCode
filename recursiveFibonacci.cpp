#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n<=1){return n;}
        return fib(n-1)+fib(n-2);
    }
};

int main() {
    Solution sol;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Fibonacci of " << n << " is: " << sol.fib(n) << std::endl;
    return 0;
}