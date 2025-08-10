// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int*ptr = &a;

//     cout<<(" thre entered number is ")<<ptr<<endl;

// }
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int n, input;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> input;
        numbers.push_back(input);
    }

    cout << "You entered: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}
