#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,4,2,7,4};
    for (int i = 0 ; i<5 ;i++){
        int curr= arr[i];
        int previous = i-1;
        while(previous>0&& arr[previous]>curr){
            arr[previous+1]= arr[previous];
            previous--;

        }
        arr[previous+1]== curr;
    }
    for (int i = 0; i < 5; i++){
        cout<<arr[i] <<" ";
    }
    cout << endl;
}