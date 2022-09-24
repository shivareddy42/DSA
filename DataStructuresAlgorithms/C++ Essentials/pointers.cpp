#include <bits/stdc++.h>

using namespace std;

struct Rectangle{
  int length;
  int breadth;
};

int main(){
  int a=10;
  int *p;
  int *g;
  int B[]={34,34,243,54,3,5,1};
  g=B;
  p=&a;
  
  // cout<<p<<endl;  address
  // cout<<*p<<endl; 10
  // cout<<&a<<endl; address
  // cout<<a<<endl;  10

  //for each
  // for(int x:B){
  //   cout<<x<<endl;
  // }

  //for array using pointer dont use *
  // for(int i=0;i<(sizeof(B)/sizeof(B[0]));i++){
  //   cout<<g[i]<<endl;
  // }

  //allocating memory in heap
  //c lang
  // int *s;
  // s=(int *)malloc(2*sizeof(int));
  // s[0]=24;s[1]=12;
  // for(int i=0;i<2;i++){
  //   cout<<s[i]<<endl;
  // }

  // free(s);

  //C++ lang
  int *s;
  s=new int[2];
  s[0]=12;s[1]=45;
  for(int i=0;i<2;i++){
    cout<<s[i]<<endl;
  }
  
  

  return 0;
}