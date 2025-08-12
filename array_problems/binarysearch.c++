#include<iostream>
#include<vector>
using namespace std;
void binarysearch(const vector<int>& arr, int target){
    int left = 0, right = arr.size()-1;
    while(left<=right){
        int mid  = left+(right-left )/2;
        if( arr[mid]== target){
            cout<<"found the taregt value at"<<mid;
            return ;
        }
        else if (arr[mid]< target){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    cout<<"value not found";

}
int main (){
    binarysearch({2,6,7,8,30,90,780,6789}, 6789);
    return 0;
}