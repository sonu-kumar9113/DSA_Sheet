//Write a program to print n fibonacci number

#include<iostream>
using namespace std;

int main(){
int n,t1=0, t2=1, next_term =0;
cout<<"Enter the number : ";
cin>>n;
    
cout<<"Fibbonacci series : ";
for(int i=1; i<=n; i++){
    if(i==1){
        cout<< t1 <<" ";
        continue;
      }
    if(i==2){
        cout<< t2 <<" ";
        continue;
      }
  next_term= t1 + t2;
  t1 = t2;
  t2 = next_term;
  cout<< next_term << " ";
  }  
cout<<endl;
}
