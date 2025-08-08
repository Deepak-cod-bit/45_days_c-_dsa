//  Given an array of integers, return indices of the two numbers such that they add 
// up to a specific target.
 
// You may assume that each input would have exactly one solution, and you may not 
// use the same element twice.
 
// Example:
 
// Given nums = [2, 7, 11, 15], target = 9,
 
// Because nums[0] + nums[1] = 2 + 7 = 9,
//  return [0, 1].
//  class Solution {
//  public:
//   vector<int> twoSum(vector<int>& nums, int target) 

#include<iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter the array of 5 numbers: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target: ";
    cin >> target;

    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) { 
            if (arr[i] + arr[j] == target) {
                cout << "Answer is [" << i << ", " << j << "]" << endl;
                return 0; 
            }
        }
    }
    cout << "No solution found." << endl;
    return 0;
} 
//here time complexity is n**2 but i will do it latter here i only copy paste the chat gpt code for time complexity
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " numbers: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int target;
//     cout << "Enter the target: ";
//     cin >> target;

//     unordered_map<int, int> m;
//     for(int i = 0; i < n; i++) {
//         int complement = target - arr[i];
//         if (m.find(complement) != m.end()) {
//             cout << "Answer is [" << m[complement] << ", " << i << "]" << endl;
//             return 0;
//         }
//         m[arr[i]] = i;
//     }

//     cout << "No solution found." << endl;
//     return 0;
// }
