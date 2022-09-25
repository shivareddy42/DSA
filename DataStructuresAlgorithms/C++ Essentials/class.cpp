#include <bits/stdc++.h>

using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;
public:
Rectangle()
{
  length=0;
  breadth=0;
}

Rectangle(int a, int b);
int area();
int peri();

};

Rectangle::Rectangle(int a,int b)
{
  length=a;
  breadth=b;
}

int Rectangle::area()
{
  return length*breadth;
}

int Rectangle::peri()
{
  return 2*(length*breadth);
}


int main()
{
  Rectangle r(10,5);
  cout<<r.peri()<<endl;
}