#include <iostream>

using namespace std;

struct rectangle{
  int length;
  int breadth;
}r1;

int main(){
  
  // struct rectangle r1;
  cin>>r1.length;
  cin>>r1.breadth;
  cout<<"The area of rectangle is "<<r1.length*r1.breadth;
  
  return 0;
}