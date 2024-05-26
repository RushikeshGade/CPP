#include<iostream>
using namespace std;

class Demo
{
    public:
      int A;
      int B;
      
    Demo(int i = 10,int j = 20)
    {
        A = 10;
        B = 20;
    }
};

int main()
{
  Demo obj1;
  Demo obj2(11);
  Demo obj3(11,21);

  return 0;
}