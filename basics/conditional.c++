// // Take an integer input and check whether it is even or odd.

// // Take a number and check if it is positive, negative, or zero.

// // Take three numbers and find the largest one.

// // Take a year and check whether it is a leap year or not.

// // Check whether a number is divisible by 5 and 11 or not.

// // Check if a character is a vowel or consonant.

// // Check whether a number is prime or not.
#include<iostream>
#include<string>
using namespace std;
// void question1(){
//     int n ;
//     cout<<"enter  the elemrnt:";
//     cin>>n;
//     if (n%2 == 0){
//         cout<<"it is even"<<endl;
//     }
//     else{
//         cout<<"it is odd"<<endl;
//     }
// }
// void question2(){
//     int n;
//     cout<<"enter a number"<<endl;
//     cin>>n;
//     if (n>0){
//         cout<<"positive"<<endl;
//     }
//     else if(n<0){
//         cout<<"negative";
//     }
//     else{
//         cout<<"zero";
//     }

// }

// void question3(){
    
//     int n;
//     cout << "Enter how many numbers: ";
//     cin >> n;

//     if (n <= 0) {
//         cout << "Please enter a valid positive number." << endl;
        
//     }

//     int num, max;
//     cout << "Enter number 1: ";
//     cin >> num;
//     max = num;

    
//     for (int i = 2; i <= n; i++) {
//         cout << "Enter number " << i << ": ";
//         cin >> num;

//         if (num > max) {
//             max = num;
//         }
//     }

//     cout << "The largest number is: " << max << endl;

   
// }
// void question4(){

//     string value;
//     cout<<"enter a string:";
//     cin>>value;
//     if (tolower(value[0]) == 'a' || tolower(value[0]) == 'e' || 
//     tolower(value[0]) == 'i' || tolower(value[0]) == 'o' || 
//     tolower(value[0]) == 'u')
//     {
//         cout<<value<<"it is a vawel";
//     }
//     else
//     {
//         cout<<"First letter is consonant,vslue"<<value[0]<<endl;
//     }

// }
void question5(){
    int n;
    cout<<"enter a number";
    cin>>n;
    if (n==0||n==1){
        cout<<"Undefined"<<endl;     
    }
    for(int i=2;i<=n;i++){
         for(int j=2;j<=i;j++){
            
             if(i%j==0) {
                 break;
             }
             else{
                cout<<i<<endl;
                break;
             }    
         }
     }
    // for (int i =2;i<=10;i++){
    //     if (n%i == 0){
    //         cout<<"it is not a prime number";
    //         break;
    //     }
    //     else{
    //         cout<<"it is a prime number";            
    //         break;
    //     }
    // }

}



    




int main(){

    // question1();
    // question2();
    // question3();
    // question4();
    question5();

    return 0 ;
}
