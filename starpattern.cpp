#include<iostream>
using namespace std;
int main(){
  int m,n;
  cout<<"Enter m: ";
  cin>>m;
  cout<<"Enter n: ";
  cin>>n;
  for(int i=1;i<=m;i++){
    for(int j=1;j<=m;j++){
        if(i==n||j==n) cout<< "*" <<" ";
        else cout<<" "<<" ";
     }
    cout<<endl;
  }
}