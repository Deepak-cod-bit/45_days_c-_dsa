#include<iostream>
#include <vector>
using namespace std;

void question1(){
    int n;
    cout << "enter the number of elements: "<<endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array elements:"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int m;
    cout << "enter the number to insert: ";
    cin >> m;
    int inx;
    cout << "enter the index where to insert (0 to " << n << "): ";
    cin >> inx;
    if (inx < 0 || inx > n) {
        cout << "enter anothe not valid" << endl;
        return;
    }
    int comp =0;
    arr.push_back(0);


    for (int i = n; i > inx; i--) {
        arr[i] = arr[i - 1];
        comp++;

    }
    

    arr[inx] = m;
    n++; 
    cout << "fianl array:";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";

    }
    cout << endl;
    if (comp==n){
        cout<<"the worst case number"<<m<<"at index"<<inx;
    }
    else if (comp == 1){
        cout<<"the best case number"<<m<<"at index"<<inx;
    }
    else {
        cout<<"the average case"<<m<<"at index"<<inx;
    }

}

int main() {
    question1();
    return 0;
}

