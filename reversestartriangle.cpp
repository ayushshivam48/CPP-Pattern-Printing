#include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"Enter no: ";
  cin>>m;
  for(int i=1;i<=m;i++){
    for(int j=1;j<=m+1-i;j++){
    cout<<"* ";
    }
    cout<<endl;
  }
}