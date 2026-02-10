#include<iostream>
using namespace std;
int factor(int n){
  int ans=1;
  for(int i=1;i<=n;i++){
    ans=i*ans;
  }
  return ans;
}
int nCr(int n,int r){
  int fact=((factor(n))/(factor(r)*factor(n-r)));
   return fact;
}

int main(){
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  int r;
  cout<<"Enter the value of r"<<endl;
  cin>>r;
  int value=nCr(n,r);
  cout<<value<<endl;

}