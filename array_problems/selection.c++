#include<iostream>
using namespace std;
int main(){
    int arr[5] = {3,2,1,34,21};
    
    for (int i = 0; i<5-1;i++){
        int samllestnuum = i;
        for(int j = i+1;j<5;j++ )

        if (arr[j]<arr[samllestnuum]){
            samllestnuum =  j;
        }
        swap(arr[i],arr[samllestnuum]);
    }
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}