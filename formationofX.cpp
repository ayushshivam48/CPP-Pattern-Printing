#include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"Enter m: ";
  cin>>m;
  for(int i=1;i<=m;i++){
    for(int j=1;j<=m;j++){
        if((i+j)%2==0) cout<<"*"<<" ";
        else cout<<" "<<" ";
     }
    cout<<endl;
  }
}