#include<iostream>
#include<vector>
using namespace std;
void question1(){
    int n;
    cout<<"enter the n";
    cin >>n;
    int arr[n];
    cout<<"enteer the array";
    cin>>arr[5];
    for (int i = 0;i<n;i++){
        cout<<"the adress of"<<arr[i]<<"is"<<&arr[i]<<endl;

    }
    

}
void question2(){
    int n,m;
    cout<<"enter the value" << endl;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    cout<<"enter the array elements"<<endl;
    for (int i = 0; i<n;i++){
        for(int j =0; j<m;j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i<n;i++){
        for(int j =0; j<m;j++){
            cout<<"the adress of "<<arr[i][j]<<"is"<<&arr[i][j]<<endl;
        }
    }


}
int main(){
    
    question2();
}