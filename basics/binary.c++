#include<iostream>
#include<vector>
using namespace std;

void question3() {
    int n;
    cout << "enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter the elements:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int mid;
    if (n % 2 == 0) {
        mid = n/2;
    } else {
        mid = (n-1) /2; 
    }
    int target;
    cout << "enter the target: ";
    cin >> target;
    bool found = false;
    if (target >= arr[mid]) {
        for (int i = mid; i < n; i++) {
            if (arr[i] == target) {
                found = true;
                break;
            }
        }
    } else {
        for (int i = mid; i >= 0; i--) {
            if (arr[i] == target) {
                found = true;
                break;
            }
        }
    }
    if (found) {
        cout << "found";
    } else {
        cout << "not found";
    }
}
int main() {
    question3();
    return 0;
}
