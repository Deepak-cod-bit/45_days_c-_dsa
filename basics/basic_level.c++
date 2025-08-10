// ake two integers as input and print their sum, difference, product, quotient, and remainder.

// Take the radius as input and calculate the area and circumference of a circle.

// Take marks in 5 subjects and calculate average and percentage.

// Take a character as input and print its ASCII value.

// Swap two numbers using a third variable and without using a third variable.

// *Demonstrate all arithmetic operators (+, -, , /, %) with examples.
#include<iostream>
using namespace std;
void question1(){
    int a,b;
    
    cout<<"enter 2 numbers:";
    cin>>a>>b;
    int sum  = a+b;
    cout<<"the sum is :" << sum<<endl;
    int multiply = a*b;
    cout<<"the multiply is "<<multiply;



}

void question2(){
    int radius;
    cout<<"the radius is :";
    cin>> radius;
    cout<<"the radius is "<<radius*radius*3.14;

}
void question3(){
    int sub1 , sub2, sub3 ;
    cout<<"the 3 subject marks are:";
    cin>> sub1>>sub2>>sub3;
    cout<<"the avergae is "<<(sub1+sub2+sub3)/3;
}
void question4(){
    char ch ;
    cout<<"enter the character:";
    cin>>ch;
    int ascii = int(ch);
    cout<<"the ascii value is "<<ascii;
}   
void question5(){
    int a , b;
    cout <<"enter the two numbres";
    cin>>a>>b;
    int temp = a;
    a = b;
    b = temp;
    cout <<"value of a is "<<a;
    cout<<"value of b is"<<b;

}
int main(){
    question1();
    question2();
    question3();
    question4();
    question5();
    return 0 ;
}