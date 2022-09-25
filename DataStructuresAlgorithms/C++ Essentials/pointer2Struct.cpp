//POINTER TO A STRUCTURE
//Allocating Memory in Heap
#include <bits/stdc++.h>

using namespace std;

struct Rectangle{
  int length;
  int breadth;
};

int main(){
  struct Rectangle *p;
  p=new Rectangle;
  p->length=10;
  p->breadth=20;
  cout<<p->length<<endl<<p->breadth;
}