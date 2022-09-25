#include <bits/stdc++.h>

using namespace std;

// void fun(int *p,int n){
//   //cant iterate through pointer using for-each
//   // for(int x:p){
//   //   cout<<x<<"";
//   // }
//   for(int i=0;i<n;i++){
//     cout<<p[i]<<" ";
//   }
// }

int * fun(int *p,int n){
  //allocating memory in heap
  p = new int[n];
  for(int i=0;i<n;i++){
    p[i]=i+1;
  }
  return (p);
}



int main(){

  // int a[]={23,53,23,4,5};
  // int size=(sizeof(a)/sizeof(int));
  // fun(a,size);
  int *a;
  //pointer as array
  a=fun(a,5);
  for(int i=0;i<5;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}