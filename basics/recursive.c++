#include <iostream>
#include <vector>
using namespace std;
bool funct(const vector<int>& arr, int target, int index, int direction, int n) {
    if (index < 0 || index >= n) return false; 
    if (arr[index] == target) return true;     
    return funct(arr, target, index + direction, direction, n); 
}
void question3() {
    int n;
    cout << "enet: ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter the number of elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "enter the target:";
    cin >> target;
    int mid = n / 2; 
    int direction = (target >= arr[mid])?1: -1;

    bool found = funct(arr, target, mid, direction, n);
    if (found) cout << "Found\n";
    else cout << "Not Found\n";
}
int main() {
    question3();
    return 0;
}
