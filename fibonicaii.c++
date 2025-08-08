//  The Fibonacci numbers, commonly denoted F(n) form a sequence, called the 
// Fibonacci sequence, such that each number is the sum of the two preceding ones, 
// starting from 0 and 1. That is,
// F(0) = 0,   F(1) = 1
//  F(N) = F(N - 1) + F(N - 2), for N > 1.
//  Given N, calculate F(N).
// Example 1: 
// Input: 2
//  Output: 1
//  Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
//  Example 2:
// Solution
//  01/31/2020:
//  561. Array Partition I 
// Description
//  Input: 3
//  Output: 2
//  Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
//  Example 3:
// Input: 4
//  Output: 3
//  Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
// Note:
 
// 0 ≤ N ≤ 30
#include<iostream>
using namespace std;
int fib(int n) {
    if (n <= 1)
        return n;

    int prev2 = 0, prev1 = 1, curr;

    for (int i = 2; i <= n; i++) {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    return curr;
}
int main(){
     int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci of " << n << " is " << fib(n) << endl;
    return 0;
}