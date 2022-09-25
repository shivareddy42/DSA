#include <bits/stdc++.h>

using namespace std;

struct Rectangle
{
  int length;
  int breadth;
};

//structure as pointer
void fun(struct Rectangle *r1)
{
  //accessing structure w pointer
  cout<<r1->length<<" "<<r1->breadth<<endl;
}

//structure as reference
void fun2(struct Rectangle &r2)
{
  cout<<r2.length<<" "<<r2.breadth<<endl;
}

//pass pointer of structure type
//creating struct in heap
struct Rectangle * fun3()
{
  struct Rectangle *a;
  a=new Rectangle;
  a->length=50;
  a->breadth=60;
  return (a);
}

int main()
{
  struct Rectangle r;
  r.length=10;
  r.breadth=20;
  // fun(&r);
  // fun2(r);
  struct Rectangle *p;
  p=fun3();
  cout<<p->length<<" "<<p->breadth<<endl;
  return 0;
}