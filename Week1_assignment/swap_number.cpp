//Swapping two numbers
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a : "<<endl;
    cin>>a;
    cout<<"Enter b : "<<endl;
    cin>>b;
    cout<<"Before swapping :"<<endl;
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"After swapping :"<<endl;
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;


}
