#include<iostream>
#include<vector>
using namespace std;

void question2() {
    int n;
    cout << "enter the number pof elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter the array elemnent\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int del_index;
    cout << "enter the index to delt(0 to " << n - 1 << "): ";
    cin >> del_index;

    if (del_index < 0 || del_index >= n) {
        cout << "wrong input" << endl;
        return ;
    }

    int comp = 0;

    for (int i = del_index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
        comp++;
    }
    arr.pop_back(); 
    n--;
    cout << "Final array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    if (comp == 0){
        cout << "best case: deleted element at index " << del_index << endl;
    }
    else if (comp == n){
        cout << "worst case: deleted element at index " << del_index << endl;
    }
    else{
        cout << "average case: deleted element at index " << del_index << endl;
    }
}

int main() {
    question2();
    return 0;
}
