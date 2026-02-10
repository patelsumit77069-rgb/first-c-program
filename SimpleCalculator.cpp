#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter the value of a"<<endl;
   cin>>a;
  cout<<"Enter the value of b"<<endl;
  cin>>b;
  char ch;
  cout<<"Enter the operation"<<endl;
  cin>>ch;
  switch(ch)
  {
    case '+': cout<<"Addition  "<<a+b<<endl;
             break;
    case '-':cout<<"Subtraction  "<<a-b<<endl;
             break;


    case '*':cout<<"Multiplication  "<<a*b<<endl;
             break;

    case'/':cout<<"Division  "<<a/b<<endl;
             break;
    case '%':cout<<"Modulus "<<a%b<<endl;
             break;
    default: cout<<"This is default case"<<endl;
  }
              }