//write a program to count the number of vowels and the number of consonants in the given chare=acter array
//wap to to concate two string 
//wap to find the reverss3e of a string

#include<iostream>
using namespace std;
void question(){
    string value;
    cout <<"enter the string:";
    cin>>value;
    int out=0;
    int vow=0;
    int con=0;

    int n = value.length();
    for (int i = 0; i <n;i++){
        char ch = tolower(value[i]);
        if (ch == 'a' || ch== 'e' ||ch== 'i' || ch== 'o' || ch == 'u'){
         vow++;
        
     }
     else if(isalpha(ch)){
        con++;
      }
    }
    cout<<"vowels"<<vow<<"consonants"<<con;
}
void question1(){
    string str1,str2;
    cout<<"enger the str1:";
    cout<<"enter the str2:";
    cin>>str1>>str2;
    cout<<"final string is :"<<str1+str2<<"final";

}
void question2(){
    string str;
    cout<<"enter a string:";
    cin>>str;
    int len = str.length();
    cout<<"the reverse string is: ";
    for (int i = len; i>=0;i--){
        cout<<str[i];

    }

}
int main(){
    question1();
    
    return 0;
}