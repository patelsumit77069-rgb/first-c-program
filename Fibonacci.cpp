#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number upto which you want to print fibonacci series"<<endl;
  cin>>n;
   int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
  for (int i=1;i<=n;i++){
   
    int nextfibN=a+b;
    cout<<nextfibN<<" ";
    a=b;
    b=nextfibN;
  }
}