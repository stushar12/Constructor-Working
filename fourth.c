#include<iostream>
using namespace std;
class A
{
public:
  int x;
  A(int a)
  {
    x=a;
      cout<<"Constructor of A called"<<endl;
  }
  void showa()
  {
    cout<<"Constructor of A"<<endl;
    cout<<"x is ="<<x<<endl;
  }
};
class B:public A
{
public:
  int y;
  B(int b,int c):A(b)
  {
    y=c;
      cout<<"Constructor of B called"<<endl;
  }
  void showb()
  {
    cout<<"Constructor of B"<<endl;
    cout<<"y is ="<<y<<endl;
  }
};
class C:public B
{
public:
  int z;
  C(int a,int b,int c):B(a,b)
  {
    z=c;
      cout<<"Constructor of C called"<<endl;
  }
  void showc()
  {
    cout<<"Constructor of C"<<endl;
    cout<<"z is ="<<z<<endl;
  }
};
int main()
{

  C obj(10,20,30);
  obj.showa();
  obj.showb();
  obj.showc();
}
