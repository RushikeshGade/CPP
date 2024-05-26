#include<iostream>
using namespace std;

class Base
{  
   public: 
   int A,B;
   void Fun()   // Defination
   {
    cout<<"Base Fun\n";
   }
   void Gun()   // Defination
   {
    cout<<"Base Gun\n";
   }
   void Sun()   // Defination
   {
    cout<<"Base Sun\n";
   }
};
class Derived : public Base
{
    public:
       int X,Y;
       void Gun()    // REDefination
       {
        cout<<"Base Gun\n";
       }
       void Sun()   //  REDefination
       {
        cout<<"Base Sun\n";
       }
       void Run()     // Defination
       {
        cout<<"Base Run\n";
       }

};

int main()
{
    Base bobj;
    Derived dobj;

    Base *bp = NULL;
    Derived *dp = NULL;

    bp = &bobj;  //Nocasting
    dp = &dobj;  //Nocasting

    bp = &dobj;  //upcasting
    dp = &bobj;  //downcasting (not Allowed) ERROR
    return 0;
}
