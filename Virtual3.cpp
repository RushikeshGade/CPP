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
   Derived dobj;
   Base *bp = &dobj;

    bp->Fun();
    bp->Gun();
    bp->Sun();
   // bp->Run();
   

    return 0;
}
