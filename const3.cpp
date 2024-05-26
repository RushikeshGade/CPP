#include<iostream>
using namespace std;

class Demo
{
    public:
    int X;
    int Y;
    Demo()
    {
        X = 10;
        Y = 20;
    }
    void Fun()   // non const fuction
    {
        cout<<"Inside Fun\n";
        X++;
        Y++;
    }
    void Gun() const  //const function
    {
        cout<<"Inside Gun\n";  
        //X++;
        //Y++;
    }
    
};

int main()
{
     Demo obj1;
     const  Demo obj1;

     obj1.Fun();  //normal object normal fuction
     obj1.Gun();  //normal object constant fuction
   
      obj2.Fun();  //constant object normal fuction   Not allowed
      obj2.Gun();  //constant object constant fuction
   
   
    return 0;
}