#include<iostream>
using namespace std;
bool isEven(int a){
  if(a&1){
    return 0;
  }
  else{
    return 1;
  }
}
int main(){
  int n;
  cout<<"Enter the number to check"<<endl;
  cin>>n;
  if(isEven(n)){
   
      cout<<"Even"<<endl;
  }
    else{
      cout<<"odd"<<endl;
    }
  }

